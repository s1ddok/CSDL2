import PackageDescription

let package = Package(
    name: "СSDL2",
    providers: [
        .Apt("libsdl2-dev"),
        .Brew("sdl2"),
    ]
)
