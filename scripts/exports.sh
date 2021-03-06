export SANDBOX=`pwd`
export ITS_ROOT=$SANDBOX/AcceleroCore
export EACC_ROOT=$SANDBOX/eAccelero
export IMS_ROOT=$SANDBOX/imsdia
export THIRD_PARTY_ROOT=$EACC_ROOT/3rdparty
#export IMS_TOOLS=$SANDBOX/imstools
#export XERCESCROOT=$IMS_TOOLS/tools/xerces-c-src_2_7_0
#export ACE_ROOT=$IMS_TOOLS/tools/ACE_wrappers
#export BOOST_ROOT=$IMS_TOOLS/tools/boost_1_33_1
#export DIAMETER_ROOT=$IMS_TOOLS/vendors/opendiameter-1.0.7-g
export PLATFORM=linux
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$XERCESCROOT/lib:$ACE_ROOT/build/ace/.libs
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$IMS_ROOT/api/c++/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$IMS_ROOT/val/c++/lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$IMS_ROOT/vendors/IntelliNet/lib
export DEBUG_BUILD=no
export ISS7_CONFIG_DIR=$IMS_ROOT/config/
export ITS_MAN_PATH=$IMS_ROOT/dbchelp/
export TLS=yes
export ENABLE_DNS=yes
export PATH=$PATH:$IMS_ROOT/demo/bin:$IMS_ROOT/scripts
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$IMS_ROOT/lib:$IMS_ROOT/demo/lib:../../lib
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:../lib
export LINUX64=yes
export LKSCTP_ROOT=/usr
