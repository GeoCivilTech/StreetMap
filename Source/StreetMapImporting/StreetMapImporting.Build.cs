using UnrealBuildTool;

public class StreetMapImporting : ModuleRules
{
    public StreetMapImporting(ReadOnlyTargetRules Target)
        : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new[]
            {
                "Core",
                "CoreUObject",
                "Engine"
            });

        PrivateDependencyModuleNames.AddRange(
            new[]
            {
                "AssetRegistry",
                "AssetTools",
                "EditorStyle",
                "Projects",
                "PropertyEditor",
                "RawMesh",
                "RenderCore",
                "RHI",
                "Slate",
                "SlateCore",
                "StreetMapRuntime",
                "UnrealEd",
                "XmlParser"
            });
    }
}
