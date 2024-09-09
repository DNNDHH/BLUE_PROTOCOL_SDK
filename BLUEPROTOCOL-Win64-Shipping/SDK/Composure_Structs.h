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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Composure.ECompPassConstructionType
	 */
	enum class ECompPassConstructionType : uint8_t
	{
		Unknown              = 0,
		EditorConstructed    = 1,
		BlueprintConstructed = 2,
		CodeConstructed      = 3,
		MAX                  = 4
	};

	/**
	 * Enum Composure.ETargetUsageFlags
	 */
	enum class ETargetUsageFlags : uint8_t
	{
		USAGE_None          = 0,
		USAGE_Input         = 1,
		USAGE_Transform     = 2,
		USAGE_Output        = 3,
		USAGE_Persistent    = 4,
		USAGE_Intermediate0 = 5,
		USAGE_Intermediate1 = 6,
		USAGE_MAX           = 7
	};

	/**
	 * Enum Composure.EInheritedSourceType
	 */
	enum class EInheritedSourceType : uint8_t
	{
		Inherited = 0,
		Override  = 1,
		MAX       = 2
	};

	/**
	 * Enum Composure.ESceneCameraLinkType
	 */
	enum class ESceneCameraLinkType : uint8_t
	{
		Inherited = 0,
		Override  = 1,
		Unused    = 2,
		MAX       = 3
	};

	/**
	 * Enum Composure.EExrCompressionOptions
	 */
	enum class EExrCompressionOptions : uint8_t
	{
		Compressed   = 0,
		Uncompressed = 1,
		MAX          = 2
	};

	/**
	 * Enum Composure.EParamType
	 */
	enum class EParamType : uint8_t
	{
		UnknownParamType  = 0,
		ScalarParam       = 1,
		VectorParam       = 2,
		TextureParam      = 3,
		MediaTextureParam = 4,
		MAX               = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Composure.CompositingParamPayload
	 * Size -> 0x00A0
	 */
	struct FCompositingParamPayload
	{
	public:
		TMap<class FName, float>                                   ScalarParamOverrides;                                    // 0x0000(0x0050) NativeAccessSpecifierPublic
		TMap<class FName, struct FLinearColor>                     VectorParamOverrides;                                    // 0x0050(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Composure.NamedCompMaterialParam
	 * Size -> 0x0008
	 */
	struct FNamedCompMaterialParam
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Composure.CompositingMaterial
	 * Size -> 0x00B8 (FullSize[0x0158] - InheritedSize[0x00A0])
	 */
	struct FCompositingMaterial : public FCompositingParamPayload
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FName>                             ParamPassMappings;                                       // 0x00A8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FNamedCompMaterialParam>          RequiredMaterialParams;                                  // 0x00F8(0x0050) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGK9[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CachedMID;                                               // 0x0150(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate, CPF_SkipSerialization
	};

	/**
	 * ScriptStruct Composure.MovieSceneComposureExportPass
	 * Size -> 0x0014
	 */
	struct FMovieSceneComposureExportPass
	{
	public:
		class FName                                                TransformPassName;                                       // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenamePass;                                             // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8S7I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ExportedAs;                                              // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Composure.ComposurePostMoveSettings
	 * Size -> 0x0018
	 */
	struct FComposurePostMoveSettings
	{
	public:
		struct FVector2D                                           Pivot;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Translation;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationAngle;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Composure.ComposureUVMapSettings
	 * Size -> 0x00A0
	 */
	struct FComposureUVMapSettings
	{
	public:
		struct FMatrix                                             PreUVDisplacementMatrix;                                 // 0x0000(0x0040) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMatrix                                             PostUVDisplacementMatrix;                                // 0x0040(0x0040) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           DisplacementDecodeParameters;                            // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture*                                            DisplacementTexture;                                     // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDisplacementBlueAndAlphaChannels : 1;                // 0x0090(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_82T5[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Composure.MovieSceneComposureExportSectionTemplate
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FMovieSceneComposureExportSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieSceneComposureExportPass                      Pass;                                                    // 0x0020(0x0014) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y2O9[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Composure.MovieSceneComposurePostMoveSettingsSectionTemplate
	 * Size -> 0x03C8 (FullSize[0x0400] - InheritedSize[0x0038])
	 */
	struct FMovieSceneComposurePostMoveSettingsSectionTemplate : public FMovieScenePropertySectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             Pivot[0x2];                                              // 0x0038(0x0140) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Translation[0x2];                                        // 0x0178(0x0140) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             RotationAngle;                                           // 0x02B8(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Scale;                                                   // 0x0358(0x00A0) NativeAccessSpecifierPrivate
		EMovieSceneBlendType                                       BlendType;                                               // 0x03F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SF87[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
