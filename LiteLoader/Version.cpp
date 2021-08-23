#include "pch.h"

namespace loaderapi {
LIAPI std::string getLoaderVersion() {
    return LITELOADER_VERSION;
}

LIAPI unsigned short getLoaderVersionNum() {
    return LITELOADER_VERSION_NUMBER;
}
}  // namespace loaderapi

THook(std::string,
      "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@"
      "@std@@XZ") {
#ifdef LiteLoaderVersionGithub
    return original() + " with LiteLoaderBDS " + LiteLoaderVersionGithub;
#else
    return original() + " with LiteLoaderBDS " + LITELOADER_VERSION;
#endif
}