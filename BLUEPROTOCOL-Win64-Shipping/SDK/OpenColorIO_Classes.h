#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OpenColorIO.OpenColorIOBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool ApplyColorSpaceTransform(class UObject* WorldContextObject, const struct FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIOColorTransform
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UOpenColorIOColorTransform : public UObject
	{
	public:
		class UOpenColorIOConfiguration*                           ConfigurationOwner;                                      // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceColorSpace;                                        // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DestinationColorSpace;                                   // 0x0040(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6FL[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIOConfiguration
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UOpenColorIOConfiguration : public UObject
	{
	public:
		struct FFilePath                                           ConfigurationFile;                                       // 0x0028(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FOpenColorIOColorSpace>                      DesiredColorSpaces;                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UOpenColorIOColorTransform*>                  ColorTransforms;                                         // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RV15[0x28];                                  // 0x0058(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OpenColorIO.OpenColorIODisplayExtensionWrapper
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOpenColorIODisplayExtensionWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_QIK8[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSceneExtensionIsActiveFunctions(TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions);
		void SetSceneExtensionIsActiveFunction(const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
		void SetOpenColorIOConfiguration(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration);
		void RemoveSceneExtension();
		class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(const struct FOpenColorIODisplayConfiguration& InDisplayConfiguration, const struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
