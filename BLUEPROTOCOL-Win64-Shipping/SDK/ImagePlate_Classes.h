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
	 * Class ImagePlate.ImagePlate
	 * Size -> 0x0008 (FullSize[0x0230] - InheritedSize[0x0228])
	 */
	class AImagePlate : public AActor
	{
	public:
		class UImagePlateComponent*                                ImagePlate;                                              // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ImagePlate.ImagePlateComponent
	 * Size -> 0x00C8 (FullSize[0x0530] - InheritedSize[0x0468])
	 */
	class UImagePlateComponent : public UPrimitiveComponent
	{
	public:
		struct FImagePlateParameters                               Plate;                                                   // 0x0468(0x0038) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PREW[0x90];                                  // 0x04A0(0x0090) MISSED OFFSET (PADDING)

	public:
		void SetImagePlate(const struct FImagePlateParameters& Plate);
		void OnRenderTextureChanged();
		struct FImagePlateParameters GetPlate();
		static UClass* StaticClass();
	};

	/**
	 * Class ImagePlate.ImagePlateSettings
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UImagePlateSettings : public UObject
	{
	public:
		class FString                                              ProxyName;                                               // 0x0028(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ImagePlate.ImagePlateFileSequence
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UImagePlateFileSequence : public UObject
	{
	public:
		struct FDirectoryPath                                      SequencePath;                                            // 0x0028(0x0010) Edit, NativeAccessSpecifierPublic
		class FString                                              FileWildcard;                                            // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameRate;                                               // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5S46[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ImagePlate.ImagePlateFrustumComponent
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class UImagePlateFrustumComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_OVZ1[0x8];                                   // 0x0468(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ImagePlate.MovieSceneImagePlateSection
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneImagePlateSection : public UMovieSceneSection
	{
	public:
		class UImagePlateFileSequence*                             FileSequence;                                            // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReuseExistingTexture;                                   // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBB4[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ImagePlate.MovieSceneImagePlateTrack
	 * Size -> 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
	 */
	class UMovieSceneImagePlateTrack : public UMovieScenePropertyTrack
	{
	public:
		unsigned char                                              UnknownData_XBPN[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
