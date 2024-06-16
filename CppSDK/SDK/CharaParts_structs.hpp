#pragma once

 

// Package: CharaParts

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum CharaParts.ECharaPartsAccessoryLocation
// NumValues: 0x0014
enum class ECharaPartsAccessoryLocation : uint8
{
	None                                     = 0,
	Head                                     = 1,
	R_IndexFinger                            = 2,
	L_RingFinger                             = 3,
	BodyBack                                 = 4,
	HipBack                                  = 5,
	HandR                                    = 6,
	HandL                                    = 7,
	SheathBackCommon                         = 8,
	SheathFlute                              = 9,
	SheathSpine1RightDown                    = 10,
	SheathSpine1LeftDown                     = 11,
	SheathSpine1RightUp                      = 12,
	SheathSpine1LeftUp                       = 13,
	SheathQuiver                             = 14,
	WeaponThrow                              = 15,
	R_IndexFinger2                           = 16,
	Nose                                     = 17,
	MAX                                      = 18,
	Default                                  = 0,
};

// Enum CharaParts.ECharaPartsCostumeColor
// NumValues: 0x000F
enum class ECharaPartsCostumeColor : uint8
{
	Default                                  = 0,
	Red                                      = 1,
	Orange                                   = 2,
	Yellow                                   = 3,
	YellowGreen                              = 4,
	Green                                    = 5,
	LightBlue                                = 6,
	Blue                                     = 7,
	Violet                                   = 8,
	Purple                                   = 9,
	RedPurple                                = 10,
	Black                                    = 11,
	White                                    = 12,
	PureWhite                                = 13,
	MAX                                      = 14,
};

// Enum CharaParts.ECharaPartsCrtLocation
// NumValues: 0x0006
enum class ECharaPartsCrtLocation : uint8
{
	None                                     = 0,
	ARM                                      = 1,
	LEG                                      = 2,
	HIP                                      = 3,
	ANKLE                                    = 4,
	MAX                                      = 5,
};

// Enum CharaParts.ECharaPartsBody
// NumValues: 0x000F
enum class ECharaPartsBody : uint8
{
	C000                                     = 0,
	M000                                     = 1,
	M100                                     = 2,
	M200                                     = 3,
	M300                                     = 4,
	M400                                     = 5,
	M500                                     = 6,
	F000                                     = 7,
	F100                                     = 8,
	F200                                     = 9,
	F300                                     = 10,
	F400                                     = 11,
	F500                                     = 12,
	MAX                                      = 13,
	Default                                  = 0,
};

// Enum CharaParts.ECharaPartsLocationIdentifier
// NumValues: 0x0013
enum class ECharaPartsLocationIdentifier : uint8
{
	_fac_                                    = 0,
	_fah_                                    = 1,
	_hef_                                    = 2,
	_glv_                                    = 3,
	_har_                                    = 4,
	_hat_                                    = 5,
	_bdl_                                    = 6,
	_bdu_                                    = 7,
	_sho_                                    = 8,
	_eye_                                    = 9,
	_mou_                                    = 10,
	_brw_                                    = 11,
	_nos_                                    = 12,
	_lin_                                    = 13,
	_bea_                                    = 14,
	_sta                                     = 15,
	_har_h_                                  = 16,
	_acc_                                    = 17,
	ECharaPartsLocationIdentifier_MAX        = 18,
};

// Enum CharaParts.ECharaPartsLocation
// NumValues: 0x0021
enum class ECharaPartsLocation : uint8
{
	Body                                     = 0,
	Face                                     = 1,
	Gloves                                   = 2,
	Hair                                     = 3,
	Hat                                      = 4,
	Lower                                    = 5,
	Upper                                    = 6,
	Shoes                                    = 7,
	BackOfHead                               = 8,
	Underwear                                = 9,
	UnderwearUpper                           = 10,
	Hair_Hat                                 = 11,
	Eye                                      = 12,
	Mouth                                    = 13,
	Brow                                     = 14,
	Nose                                     = 15,
	Line                                     = 16,
	Beard                                    = 17,
	Accessory                                = 18,
	Accessory1                               = 18,
	Accessory2                               = 19,
	Accessory3                               = 20,
	AccessoryHeadTop                         = 21,
	AccessoryHeadMid                         = 22,
	AccessoryHeadLow                         = 23,
	AccessoryHeadEar                         = 24,
	AccessoryFinger                          = 25,
	AccessoryEngagement                      = 26,
	AccessoryBodyBack                        = 27,
	AccessoryHipBack                         = 28,
	AccessoryLeftFinger                      = 29,
	MAX                                      = 30,
	Default                                  = 0,
};

// Enum CharaParts.ECharaPartsCharacterTypeIdentifier
// NumValues: 0x0004
enum class ECharaPartsCharacterTypeIdentifier : uint8
{
	Creation                                 = 0,
	Npc                                      = 1,
	Mob                                      = 2,
	ECharaPartsCharacterTypeIdentifier_MAX   = 3,
};

// Enum CharaParts.ECharaPartsCharacterType
// NumValues: 0x0007
enum class ECharaPartsCharacterType : uint8
{
	Player                                   = 0,
	Npc                                      = 1,
	Mob                                      = 2,
	Enemy                                    = 3,
	ShadowAvator                             = 4,
	MAX                                      = 5,
	Default                                  = 0,
};

// ScriptStruct CharaParts.CharaPartsDataAssetHolder
// 0x0068 (0x0068 - 0x0000)
struct FCharaPartsDataAssetHolder final
{
public:
	class UClass*                                 AnimClass;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCharaPartsMaterialSet*>         MaterialSetList;                                   // 0x0008(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<class UCharaPartsColorListBase*>       MaterialColorListAsset;                            // 0x0018(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NativeAccessSpecifierPublic)
	class UDataAsset*                             FacialAnimationSet;                                // 0x0028(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                             FacialPoseAssetEye;                                // 0x0030(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                             FacialPoseAssetBrow;                               // 0x0038(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                             FacialPoseAssetMouth;                              // 0x0040(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                             FacialPoseAssetAdj;                                // 0x0048(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                             FacialPoseAssetEyelid;                             // 0x0050(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoseAsset*                             FacialPoseAssetDfm;                                // 0x0058(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 HairAnimClass;                                     // 0x0060(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharaPartsDataAssetHolder) == 0x000008, "Wrong alignment on FCharaPartsDataAssetHolder");
static_assert(sizeof(FCharaPartsDataAssetHolder) == 0x000068, "Wrong size on FCharaPartsDataAssetHolder");
static_assert(offsetof(FCharaPartsDataAssetHolder, AnimClass) == 0x000000, "Member 'FCharaPartsDataAssetHolder::AnimClass' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, MaterialSetList) == 0x000008, "Member 'FCharaPartsDataAssetHolder::MaterialSetList' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, MaterialColorListAsset) == 0x000018, "Member 'FCharaPartsDataAssetHolder::MaterialColorListAsset' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, FacialAnimationSet) == 0x000028, "Member 'FCharaPartsDataAssetHolder::FacialAnimationSet' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, FacialPoseAssetEye) == 0x000030, "Member 'FCharaPartsDataAssetHolder::FacialPoseAssetEye' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, FacialPoseAssetBrow) == 0x000038, "Member 'FCharaPartsDataAssetHolder::FacialPoseAssetBrow' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, FacialPoseAssetMouth) == 0x000040, "Member 'FCharaPartsDataAssetHolder::FacialPoseAssetMouth' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, FacialPoseAssetAdj) == 0x000048, "Member 'FCharaPartsDataAssetHolder::FacialPoseAssetAdj' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, FacialPoseAssetEyelid) == 0x000050, "Member 'FCharaPartsDataAssetHolder::FacialPoseAssetEyelid' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, FacialPoseAssetDfm) == 0x000058, "Member 'FCharaPartsDataAssetHolder::FacialPoseAssetDfm' has a wrong offset!");
static_assert(offsetof(FCharaPartsDataAssetHolder, HairAnimClass) == 0x000060, "Member 'FCharaPartsDataAssetHolder::HairAnimClass' has a wrong offset!");

// ScriptStruct CharaParts.CharaPartsExtraColorData
// 0x0068 (0x0068 - 0x0000)
struct FCharaPartsExtraColorData final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CA4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name;                                              // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>      Material;                                          // 0x0018(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>      SubMaterial;                                       // 0x0040(0x0028)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharaPartsExtraColorData) == 0x000008, "Wrong alignment on FCharaPartsExtraColorData");
static_assert(sizeof(FCharaPartsExtraColorData) == 0x000068, "Wrong size on FCharaPartsExtraColorData");
static_assert(offsetof(FCharaPartsExtraColorData, IsValid) == 0x000000, "Member 'FCharaPartsExtraColorData::IsValid' has a wrong offset!");
static_assert(offsetof(FCharaPartsExtraColorData, Name) == 0x000008, "Member 'FCharaPartsExtraColorData::Name' has a wrong offset!");
static_assert(offsetof(FCharaPartsExtraColorData, Material) == 0x000018, "Member 'FCharaPartsExtraColorData::Material' has a wrong offset!");
static_assert(offsetof(FCharaPartsExtraColorData, SubMaterial) == 0x000040, "Member 'FCharaPartsExtraColorData::SubMaterial' has a wrong offset!");

// ScriptStruct CharaParts.CharaPartsMaterials
// 0x0010 (0x0010 - 0x0000)
struct FCharaPartsMaterials final
{
public:
	TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                                         // 0x0000(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharaPartsMaterials) == 0x000008, "Wrong alignment on FCharaPartsMaterials");
static_assert(sizeof(FCharaPartsMaterials) == 0x000010, "Wrong size on FCharaPartsMaterials");
static_assert(offsetof(FCharaPartsMaterials, Materials) == 0x000000, "Member 'FCharaPartsMaterials::Materials' has a wrong offset!");

// ScriptStruct CharaParts.CharaPartsColorData
// 0x0060 (0x0060 - 0x0000)
struct FCharaPartsColorData
{
public:
	uint8                                         Pad_1CA5[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          IsValid;                                           // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CA6[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           BaseColor1;                                        // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           BaseColor2;                                        // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           BaseColor3;                                        // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           BaseColor4;                                        // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharaPartsColorData) == 0x000008, "Wrong alignment on FCharaPartsColorData");
static_assert(sizeof(FCharaPartsColorData) == 0x000060, "Wrong size on FCharaPartsColorData");
static_assert(offsetof(FCharaPartsColorData, IsValid) == 0x000008, "Member 'FCharaPartsColorData::IsValid' has a wrong offset!");
static_assert(offsetof(FCharaPartsColorData, Name) == 0x000010, "Member 'FCharaPartsColorData::Name' has a wrong offset!");
static_assert(offsetof(FCharaPartsColorData, BaseColor1) == 0x000020, "Member 'FCharaPartsColorData::BaseColor1' has a wrong offset!");
static_assert(offsetof(FCharaPartsColorData, BaseColor2) == 0x000030, "Member 'FCharaPartsColorData::BaseColor2' has a wrong offset!");
static_assert(offsetof(FCharaPartsColorData, BaseColor3) == 0x000040, "Member 'FCharaPartsColorData::BaseColor3' has a wrong offset!");
static_assert(offsetof(FCharaPartsColorData, BaseColor4) == 0x000050, "Member 'FCharaPartsColorData::BaseColor4' has a wrong offset!");

// ScriptStruct CharaParts.CharaPartsColorDataWeapon
// 0x0020 (0x0080 - 0x0060)
struct FCharaPartsColorDataWeapon final : public FCharaPartsColorData
{
public:
	struct FLinearColor                           EmissiveColor1;                                    // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           EmissiveColor2;                                    // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharaPartsColorDataWeapon) == 0x000008, "Wrong alignment on FCharaPartsColorDataWeapon");
static_assert(sizeof(FCharaPartsColorDataWeapon) == 0x000080, "Wrong size on FCharaPartsColorDataWeapon");
static_assert(offsetof(FCharaPartsColorDataWeapon, EmissiveColor1) == 0x000060, "Member 'FCharaPartsColorDataWeapon::EmissiveColor1' has a wrong offset!");
static_assert(offsetof(FCharaPartsColorDataWeapon, EmissiveColor2) == 0x000070, "Member 'FCharaPartsColorDataWeapon::EmissiveColor2' has a wrong offset!");

// ScriptStruct CharaParts.CharaPartsCoordinateData
// 0x0018 (0x0018 - 0x0000)
struct FCharaPartsCoordinateData final
{
public:
	ECharaPartsLocation                           TargetLocation;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CA7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        TargetParts;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MeshID;                                            // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CA8[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCharaPartsCoordinateData) == 0x000008, "Wrong alignment on FCharaPartsCoordinateData");
static_assert(sizeof(FCharaPartsCoordinateData) == 0x000018, "Wrong size on FCharaPartsCoordinateData");
static_assert(offsetof(FCharaPartsCoordinateData, TargetLocation) == 0x000000, "Member 'FCharaPartsCoordinateData::TargetLocation' has a wrong offset!");
static_assert(offsetof(FCharaPartsCoordinateData, TargetParts) == 0x000008, "Member 'FCharaPartsCoordinateData::TargetParts' has a wrong offset!");
static_assert(offsetof(FCharaPartsCoordinateData, MeshID) == 0x000010, "Member 'FCharaPartsCoordinateData::MeshID' has a wrong offset!");

// ScriptStruct CharaParts.CharaPartsCanBeEquipBody
// 0x000D (0x000D - 0x0000)
struct FCharaPartsCanBeEquipBody final
{
public:
	bool                                          C000;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M000;                                              // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M100;                                              // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M200;                                              // 0x0003(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M300;                                              // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M400;                                              // 0x0005(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          M500;                                              // 0x0006(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          F000;                                              // 0x0007(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          F100;                                              // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          F200;                                              // 0x0009(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          F300;                                              // 0x000A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          F400;                                              // 0x000B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          F500;                                              // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharaPartsCanBeEquipBody) == 0x000001, "Wrong alignment on FCharaPartsCanBeEquipBody");
static_assert(sizeof(FCharaPartsCanBeEquipBody) == 0x00000D, "Wrong size on FCharaPartsCanBeEquipBody");
static_assert(offsetof(FCharaPartsCanBeEquipBody, C000) == 0x000000, "Member 'FCharaPartsCanBeEquipBody::C000' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, M000) == 0x000001, "Member 'FCharaPartsCanBeEquipBody::M000' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, M100) == 0x000002, "Member 'FCharaPartsCanBeEquipBody::M100' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, M200) == 0x000003, "Member 'FCharaPartsCanBeEquipBody::M200' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, M300) == 0x000004, "Member 'FCharaPartsCanBeEquipBody::M300' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, M400) == 0x000005, "Member 'FCharaPartsCanBeEquipBody::M400' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, M500) == 0x000006, "Member 'FCharaPartsCanBeEquipBody::M500' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, F000) == 0x000007, "Member 'FCharaPartsCanBeEquipBody::F000' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, F100) == 0x000008, "Member 'FCharaPartsCanBeEquipBody::F100' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, F200) == 0x000009, "Member 'FCharaPartsCanBeEquipBody::F200' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, F300) == 0x00000A, "Member 'FCharaPartsCanBeEquipBody::F300' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, F400) == 0x00000B, "Member 'FCharaPartsCanBeEquipBody::F400' has a wrong offset!");
static_assert(offsetof(FCharaPartsCanBeEquipBody, F500) == 0x00000C, "Member 'FCharaPartsCanBeEquipBody::F500' has a wrong offset!");

// ScriptStruct CharaParts.CharaPartsSubLocation
// 0x001C (0x001C - 0x0000)
struct FCharaPartsSubLocation final
{
public:
	bool                                          Hat;                                               // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Upper;                                             // 0x0001(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Lower;                                             // 0x0002(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Gloves;                                            // 0x0003(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Shoes;                                             // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Hair;                                              // 0x0005(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Face;                                              // 0x0006(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Eye;                                               // 0x0007(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Mouth;                                             // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Brow;                                              // 0x0009(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Nose;                                              // 0x000A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Line;                                              // 0x000B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Beard;                                             // 0x000C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BackOfHead;                                        // 0x000D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Underwear;                                         // 0x000E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UnderwearUpper;                                    // 0x000F(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Accessory1;                                        // 0x0010(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Accessory2;                                        // 0x0011(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Accessory3;                                        // 0x0012(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryHeadTop;                                  // 0x0013(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryHeadMid;                                  // 0x0014(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryHeadLow;                                  // 0x0015(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryHeadEar;                                  // 0x0016(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryFinger;                                   // 0x0017(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryEngagement;                               // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryBodyBack;                                 // 0x0019(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryHipBack;                                  // 0x001A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          AccessoryLeftFinger;                               // 0x001B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCharaPartsSubLocation) == 0x000001, "Wrong alignment on FCharaPartsSubLocation");
static_assert(sizeof(FCharaPartsSubLocation) == 0x00001C, "Wrong size on FCharaPartsSubLocation");
static_assert(offsetof(FCharaPartsSubLocation, Hat) == 0x000000, "Member 'FCharaPartsSubLocation::Hat' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Upper) == 0x000001, "Member 'FCharaPartsSubLocation::Upper' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Lower) == 0x000002, "Member 'FCharaPartsSubLocation::Lower' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Gloves) == 0x000003, "Member 'FCharaPartsSubLocation::Gloves' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Shoes) == 0x000004, "Member 'FCharaPartsSubLocation::Shoes' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Hair) == 0x000005, "Member 'FCharaPartsSubLocation::Hair' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Face) == 0x000006, "Member 'FCharaPartsSubLocation::Face' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Eye) == 0x000007, "Member 'FCharaPartsSubLocation::Eye' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Mouth) == 0x000008, "Member 'FCharaPartsSubLocation::Mouth' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Brow) == 0x000009, "Member 'FCharaPartsSubLocation::Brow' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Nose) == 0x00000A, "Member 'FCharaPartsSubLocation::Nose' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Line) == 0x00000B, "Member 'FCharaPartsSubLocation::Line' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Beard) == 0x00000C, "Member 'FCharaPartsSubLocation::Beard' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, BackOfHead) == 0x00000D, "Member 'FCharaPartsSubLocation::BackOfHead' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Underwear) == 0x00000E, "Member 'FCharaPartsSubLocation::Underwear' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, UnderwearUpper) == 0x00000F, "Member 'FCharaPartsSubLocation::UnderwearUpper' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Accessory1) == 0x000010, "Member 'FCharaPartsSubLocation::Accessory1' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Accessory2) == 0x000011, "Member 'FCharaPartsSubLocation::Accessory2' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, Accessory3) == 0x000012, "Member 'FCharaPartsSubLocation::Accessory3' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryHeadTop) == 0x000013, "Member 'FCharaPartsSubLocation::AccessoryHeadTop' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryHeadMid) == 0x000014, "Member 'FCharaPartsSubLocation::AccessoryHeadMid' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryHeadLow) == 0x000015, "Member 'FCharaPartsSubLocation::AccessoryHeadLow' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryHeadEar) == 0x000016, "Member 'FCharaPartsSubLocation::AccessoryHeadEar' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryFinger) == 0x000017, "Member 'FCharaPartsSubLocation::AccessoryFinger' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryEngagement) == 0x000018, "Member 'FCharaPartsSubLocation::AccessoryEngagement' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryBodyBack) == 0x000019, "Member 'FCharaPartsSubLocation::AccessoryBodyBack' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryHipBack) == 0x00001A, "Member 'FCharaPartsSubLocation::AccessoryHipBack' has a wrong offset!");
static_assert(offsetof(FCharaPartsSubLocation, AccessoryLeftFinger) == 0x00001B, "Member 'FCharaPartsSubLocation::AccessoryLeftFinger' has a wrong offset!");

}

