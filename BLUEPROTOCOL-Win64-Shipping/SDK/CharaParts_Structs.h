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
	 * Enum CharaParts.ECharaPartsAccessoryLocation
	 */
	enum class ECharaPartsAccessoryLocation : uint8_t
	{
		None                  = 0,
		Head                  = 1,
		R_IndexFinger         = 2,
		L_RingFinger          = 3,
		BodyBack              = 4,
		HipBack               = 5,
		HandR                 = 6,
		HandL                 = 7,
		SheathBackCommon      = 8,
		SheathFlute           = 9,
		SheathSpine1RightDown = 10,
		SheathSpine1LeftDown  = 11,
		SheathSpine1RightUp   = 12,
		SheathSpine1LeftUp    = 13,
		SheathQuiver          = 14,
		WeaponThrow           = 15,
		R_IndexFinger2        = 16,
		Nose                  = 17,
		MAX                   = 18,
		Default               = 19
	};

	/**
	 * Enum CharaParts.ECharaPartsCostumeColor
	 */
	enum class ECharaPartsCostumeColor : uint8_t
	{
		Default     = 0,
		Red         = 1,
		Orange      = 2,
		Yellow      = 3,
		YellowGreen = 4,
		Green       = 5,
		LightBlue   = 6,
		Blue        = 7,
		Violet      = 8,
		Purple      = 9,
		RedPurple   = 10,
		Black       = 11,
		White       = 12,
		PureWhite   = 13,
		MAX         = 14
	};

	/**
	 * Enum CharaParts.ECharaPartsCrtLocation
	 */
	enum class ECharaPartsCrtLocation : uint8_t
	{
		None  = 0,
		ARM   = 1,
		LEG   = 2,
		HIP   = 3,
		ANKLE = 4,
		MAX   = 5
	};

	/**
	 * Enum CharaParts.ECharaPartsBody
	 */
	enum class ECharaPartsBody : uint8_t
	{
		C000    = 0,
		M000    = 1,
		M100    = 2,
		M200    = 3,
		M300    = 4,
		M400    = 5,
		M500    = 6,
		F000    = 7,
		F100    = 8,
		F200    = 9,
		F300    = 10,
		F400    = 11,
		F500    = 12,
		MAX     = 13,
		Default = 14
	};

	/**
	 * Enum CharaParts.ECharaPartsLocationIdentifier
	 */
	enum class ECharaPartsLocationIdentifier : uint8_t
	{
		_fac_   = 0,
		_fah_   = 1,
		_hef_   = 2,
		_glv_   = 3,
		_har_   = 4,
		_hat_   = 5,
		_bdl_   = 6,
		_bdu_   = 7,
		_sho_   = 8,
		_eye_   = 9,
		_mou_   = 10,
		_brw_   = 11,
		_nos_   = 12,
		_lin_   = 13,
		_bea_   = 14,
		_sta    = 15,
		_har_h_ = 16,
		_acc_   = 17,
		MAX     = 18
	};

	/**
	 * Enum CharaParts.ECharaPartsLocation
	 */
	enum class ECharaPartsLocation : uint8_t
	{
		Body                = 0,
		Face                = 1,
		Gloves              = 2,
		Hair                = 3,
		Hat                 = 4,
		Lower               = 5,
		Upper               = 6,
		Shoes               = 7,
		BackOfHead          = 8,
		Underwear           = 9,
		UnderwearUpper      = 10,
		Hair_Hat            = 11,
		Eye                 = 12,
		Mouth               = 13,
		Brow                = 14,
		Nose                = 15,
		Line                = 16,
		Beard               = 17,
		Accessory           = 18,
		Accessory1          = 19,
		Accessory2          = 20,
		Accessory3          = 21,
		AccessoryHeadTop    = 22,
		AccessoryHeadMid    = 23,
		AccessoryHeadLow    = 24,
		AccessoryHeadEar    = 25,
		AccessoryFinger     = 26,
		AccessoryEngagement = 27,
		AccessoryBodyBack   = 28,
		AccessoryHipBack    = 29,
		AccessoryLeftFinger = 30,
		MAX                 = 31,
		Default             = 32
	};

	/**
	 * Enum CharaParts.ECharaPartsCharacterTypeIdentifier
	 */
	enum class ECharaPartsCharacterTypeIdentifier : uint8_t
	{
		Creation = 0,
		Npc      = 1,
		Mob      = 2,
		MAX      = 3
	};

	/**
	 * Enum CharaParts.ECharaPartsCharacterType
	 */
	enum class ECharaPartsCharacterType : uint8_t
	{
		Player       = 0,
		Npc          = 1,
		Mob          = 2,
		Enemy        = 3,
		ShadowAvator = 4,
		MAX          = 5,
		Default      = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CharaParts.CharaPartsMaterials
	 * Size -> 0x0010
	 */
	struct FCharaPartsMaterials
	{
	public:
		unsigned char                                              Materials[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct CharaParts.CharaPartsColorData
	 * Size -> 0x0060
	 */
	struct FCharaPartsColorData
	{
	public:
		unsigned char                                              UnknownData_KECA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       IsValid;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSW0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor1;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor2;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor3;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColor4;                                              // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharaParts.CharaPartsColorDataWeapon
	 * Size -> 0x0020 (FullSize[0x0080] - InheritedSize[0x0060])
	 */
	struct FCharaPartsColorDataWeapon : public FCharaPartsColorData
	{
	public:
		struct FLinearColor                                        EmissiveColor1;                                          // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        EmissiveColor2;                                          // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharaParts.CharaPartsSubLocation
	 * Size -> 0x001C
	 */
	struct FCharaPartsSubLocation
	{
	public:
		bool                                                       Hat;                                                     // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Upper;                                                   // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Lower;                                                   // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Gloves;                                                  // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Shoes;                                                   // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Hair;                                                    // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Face;                                                    // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Eye;                                                     // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Mouth;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Brow;                                                    // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Nose;                                                    // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Line;                                                    // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Beard;                                                   // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BackOfHead;                                              // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Underwear;                                               // 0x000E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UnderwearUpper;                                          // 0x000F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Accessory1;                                              // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Accessory2;                                              // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Accessory3;                                              // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryHeadTop;                                        // 0x0013(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryHeadMid;                                        // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryHeadLow;                                        // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryHeadEar;                                        // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryFinger;                                         // 0x0017(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryEngagement;                                     // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryBodyBack;                                       // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryHipBack;                                        // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AccessoryLeftFinger;                                     // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharaParts.CharaPartsCoordinateData
	 * Size -> 0x0018
	 */
	struct FCharaPartsCoordinateData
	{
	public:
		ECharaPartsLocation                                        TargetLocation;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UF04[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharaPartsData*                                     TargetParts;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeshID;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVK5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct CharaParts.CharaPartsExtraColorData
	 * Size -> 0x0068
	 */
	struct FCharaPartsExtraColorData
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HEPH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Material[0x28];                                          // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SubMaterial[0x28];                                       // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct CharaParts.CharaPartsDataAssetHolder
	 * Size -> 0x0068
	 */
	struct FCharaPartsDataAssetHolder
	{
	public:
		class UClass*                                              AnimClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UCharaPartsMaterialSet*>                      MaterialSetList;                                         // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		TArray<class UCharaPartsColorListBase*>                    MaterialColorListAsset;                                  // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic
		class UDataAsset*                                          FacialAnimationSet;                                      // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPoseAsset*                                          FacialPoseAssetEye;                                      // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPoseAsset*                                          FacialPoseAssetBrow;                                     // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPoseAsset*                                          FacialPoseAssetMouth;                                    // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPoseAsset*                                          FacialPoseAssetAdj;                                      // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPoseAsset*                                          FacialPoseAssetEyelid;                                   // 0x0050(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPoseAsset*                                          FacialPoseAssetDfm;                                      // 0x0058(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              HairAnimClass;                                           // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct CharaParts.CharaPartsCanBeEquipBody
	 * Size -> 0x000D
	 */
	struct FCharaPartsCanBeEquipBody
	{
	public:
		bool                                                       C000;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       M000;                                                    // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       M100;                                                    // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       M200;                                                    // 0x0003(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       M300;                                                    // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       M400;                                                    // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       M500;                                                    // 0x0006(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       F000;                                                    // 0x0007(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       F100;                                                    // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       F200;                                                    // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       F300;                                                    // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       F400;                                                    // 0x000B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       F500;                                                    // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
