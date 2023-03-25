#include <cstdio>

int main()
{
#ifdef NDEBUG
    const auto* buildType = "release";
#else
    const auto* buildType = "debug";
#endif

#if defined(__clang__)
    std::printf("Built with clang-%d.%d.%d (%s)\n", __clang_major__, __clang_minor__, __clang_patchlevel__, buildType);
#elif defined(__GNUC__) || defined(__GNUG__)
    std::printf("Built with gcc-%d.%d.%d (%s)\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__, buildType);
#endif

    std::printf("Hello world\n");
    return 0;
}
