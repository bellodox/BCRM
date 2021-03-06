//#define STRINGDATE __DATE__
#define STRINGDATE "Aug 30 2018"
#define STRINGHASH "96c5eea9f6d55088b8c6d51053b4820a7041069df2e943deb6d921f6e80fffad"
#define STRING STRINGDATE " " STRINGHASH
#define GENKEY "0477520a956748370202983fab0f328d5ec0df5a8015da41b4bfcf292d2ad19beceb5e71a601cd7846b71b4e3bdb9f31789d3ce859fd3a883dcdbbad3dd578a99d"
#define MAIN_POWLIMIT "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"
#define MAIN_SUBSIDY 0
#define SCRIPTSIG (uint64_t)arith_uint256(MAIN_POWLIMIT).GetCompact()

#define MAIN_NBITS arith_uint256(MAIN_POWLIMIT).GetCompact()
#define MAIN_TIME 1535670295
#define MAIN_NONCE 0
#define MAIN_MERKLE_ROOT "0xb15501c7d3cd13d5e157dcf01179389b65c770aa672f99ac9f2e7fded265456e"
#define MAIN_GENESIS_HASH "0x81f315fab6be65d0969c829857a0be3fd8b35b0c0cee0faa398424544599fc5c"
#define MAIN_EQUIHASH "08511cc3c3855dd037d8d9ea361f541bd85c26af887f8aa7583f805e620e10b8cbddfefaa12502a2641e1ff1fc096d4b162911224f4f84b0cd65d69275a162f5ae7c5aa104e0d3ff4b88da21f297fff2a05aebd95bfa2f02bc7f7e2e5205547d2eeeafc3"

#define TEST_POWLIMIT "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"
#define TEST_SUBSIDY 0
#define TEST_NBITS arith_uint256(TEST_POWLIMIT).GetCompact()
#define TEST_TIME 1535670445
#define TEST_NONCE 0
#define TEST_MERKLE_ROOT "0xb15501c7d3cd13d5e157dcf01179389b65c770aa672f99ac9f2e7fded265456e"
#define TEST_GENESIS_HASH "0x0526291dd33a0cccf36668ff500797cb699b1fa1aee05f7d634c233cb2a7b022"
#define TEST_EQUIHASH "0ecd24bb9b6d4c8983b34ab382f8db2cba2b8204243b07cd8f1cf311e0fb7e6ab18a5bd029a68d69765930d32f8e01f35d2b194e3de8910e5ef8fcf17274570a8ddfa0e21a29d7ff41155c309207272711cda4f2eeac18a8ecf9cf4c36aedc5563e524b9"

#define REG_POWLIMIT "ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"
#define REG_SUBSIDY 0
#define REG_NBITS arith_uint256(REG_POWLIMIT).GetCompact()
#define REG_TIME 1535670554
#define REG_NONCE 0
#define REG_MERKLE_ROOT "0xb15501c7d3cd13d5e157dcf01179389b65c770aa672f99ac9f2e7fded265456e"
#define REG_GENESIS_HASH "0xdada6a6085a35147261e1e90de9abd3fc499b0161a9e6725f20ffb0403b314b8"
#define REG_EQUIHASH "04a6a613428308e07c1027d23412acff29f80d241f7574464345ba2b9ecb5d13be60fa9c"
