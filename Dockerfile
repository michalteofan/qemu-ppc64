FROM registry.redhat.io/quay/quay-rhel8@sha256:c0c029f1cd568cd200158cf3b4f912ae3b25fe37155a3cff5331113edb94d31d
RUN yum install -y net-tools wget curl gzip unzip tar bind-utils iproute iputils yum-utils xz
RUN yum install -y git glib2-devel libfdt-devel pixman-devel ninja-build make gcc libcap-ng-devel libattr-devel zlib-devel kernel-headers python-sphinx stress
COPY ./qemu-8.1.2 /qemu-8.1.2
RUN cd /qemu-8.1.2; pwd; ./configure --target-list=ppc64-softmmu --enable-virtfs; make -j

ENTRYPOINT ["tail", "-f", "/dev/null"]
