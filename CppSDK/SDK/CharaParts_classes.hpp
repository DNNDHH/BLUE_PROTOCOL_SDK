#pragma once

 

// Package: CharaParts

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CharaParts_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class CharaParts.CharaPartsMaterialSet
// 0x0010 (0x0040 - 0x0030)
class UCharaPartsMaterialSet final : public UDataAsset
{
public:
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharaPartsMaterialSet">();
	}
	static class UCharaPartsMaterialSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaPartsMaterialSet>();
	}
};
static_assert(alignof(UCharaPartsMaterialSet) == 0x000008, "Wrong alignment on UCharaPartsMaterialSet");
static_assert(sizeof(UCharaPartsMaterialSet) == 0x000040, "Wrong size on UCharaPartsMaterialSet");
static_assert(offsetof(UCharaPartsMaterialSet, Materials) == 0x000030, "Member 'UCharaPartsMaterialSet::Materials' has a wrong offset!");

// Class CharaParts.CharaPartsMaterialsList
// 0x0010 (0x0040 - 0x0030)
class UCharaPartsMaterialsList final : public UDataAsset
{
public:
	TArray<struct FCharaPartsMaterials>           MaterialsList;                                     // 0x0030(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharaPartsMaterialsList">();
	}
	static class UCharaPartsMaterialsList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaPartsMaterialsList>();
	}
};
static_assert(alignof(UCharaPartsMaterialsList) == 0x000008, "Wrong alignment on UCharaPartsMaterialsList");
static_assert(sizeof(UCharaPartsMaterialsList) == 0x000040, "Wrong size on UCharaPartsMaterialsList");
static_assert(offsetof(UCharaPartsMaterialsList, MaterialsList) == 0x000030, "Member 'UCharaPartsMaterialsList::MaterialsList' has a wrong offset!");

// Class CharaParts.CharaPartsColorListBase
// 0x0000 (0x0030 - 0x0030)
class UCharaPartsColorListBase : public UDataAsset
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharaPartsColorListBase">();
	}
	static class UCharaPartsColorListBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaPartsColorListBase>();
	}
};
static_assert(alignof(UCharaPartsColorListBase) == 0x000008, "Wrong alignment on UCharaPartsColorListBase");
static_assert(sizeof(UCharaPartsColorListBase) == 0x000030, "Wrong size on UCharaPartsColorListBase");

// Class CharaParts.CharaPartsColorList
// 0x0010 (0x0040 - 0x0030)
class UCharaPartsColorList final : public UCharaPartsColorListBase
{
public:
	TArray<struct FCharaPartsColorData>           ColorList;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharaPartsColorList">();
	}
	static class UCharaPartsColorList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaPartsColorList>();
	}
};
static_assert(alignof(UCharaPartsColorList) == 0x000008, "Wrong alignment on UCharaPartsColorList");
static_assert(sizeof(UCharaPartsColorList) == 0x000040, "Wrong size on UCharaPartsColorList");
static_assert(offsetof(UCharaPartsColorList, ColorList) == 0x000030, "Member 'UCharaPartsColorList::ColorList' has a wrong offset!");

// Class CharaParts.CharaPartsColorWeaponList
// 0x0010 (0x0040 - 0x0030)
class UCharaPartsColorWeaponList final : public UCharaPartsColorListBase
{
public:
	TArray<struct FCharaPartsColorDataWeapon>     ColorList;                                         // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharaPartsColorWeaponList">();
	}
	static class UCharaPartsColorWeaponList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaPartsColorWeaponList>();
	}
};
static_assert(alignof(UCharaPartsColorWeaponList) == 0x000008, "Wrong alignment on UCharaPartsColorWeaponList");
static_assert(sizeof(UCharaPartsColorWeaponList) == 0x000040, "Wrong size on UCharaPartsColorWeaponList");
static_assert(offsetof(UCharaPartsColorWeaponList, ColorList) == 0x000030, "Member 'UCharaPartsColorWeaponList::ColorList' has a wrong offset!");

// Class CharaParts.CharaPartsOffsetList
// 0x0290 (0x02C0 - 0x0030)
class UCharaPartsOffsetList final : public UDataAsset
{
public:
	struct FTransform                             M000;                                              // 0x0030(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             M100;                                              // 0x0060(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             M200;                                              // 0x0090(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             M300;                                              // 0x00C0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             M400;                                              // 0x00F0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             M500;                                              // 0x0120(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             F000;                                              // 0x0150(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             F100;                                              // 0x0180(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             F200;                                              // 0x01B0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             F300;                                              // 0x01E0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             F400;                                              // 0x0210(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                             F500;                                              // 0x0240(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TMap<ECharaPartsBody, struct FTransform>      CharaPartsMap;                                     // 0x0270(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharaPartsOffsetList">();
	}
	static class UCharaPartsOffsetList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaPartsOffsetList>();
	}
};
static_assert(alignof(UCharaPartsOffsetList) == 0x000010, "Wrong alignment on UCharaPartsOffsetList");
static_assert(sizeof(UCharaPartsOffsetList) == 0x0002C0, "Wrong size on UCharaPartsOffsetList");
static_assert(offsetof(UCharaPartsOffsetList, M000) == 0x000030, "Member 'UCharaPartsOffsetList::M000' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, M100) == 0x000060, "Member 'UCharaPartsOffsetList::M100' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, M200) == 0x000090, "Member 'UCharaPartsOffsetList::M200' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, M300) == 0x0000C0, "Member 'UCharaPartsOffsetList::M300' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, M400) == 0x0000F0, "Member 'UCharaPartsOffsetList::M400' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, M500) == 0x000120, "Member 'UCharaPartsOffsetList::M500' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, F000) == 0x000150, "Member 'UCharaPartsOffsetList::F000' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, F100) == 0x000180, "Member 'UCharaPartsOffsetList::F100' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, F200) == 0x0001B0, "Member 'UCharaPartsOffsetList::F200' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, F300) == 0x0001E0, "Member 'UCharaPartsOffsetList::F300' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, F400) == 0x000210, "Member 'UCharaPartsOffsetList::F400' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, F500) == 0x000240, "Member 'UCharaPartsOffsetList::F500' has a wrong offset!");
static_assert(offsetof(UCharaPartsOffsetList, CharaPartsMap) == 0x000270, "Member 'UCharaPartsOffsetList::CharaPartsMap' has a wrong offset!");

// Class CharaParts.CharaPartsData
// 0x0330 (0x0360 - 0x0030)
class UCharaPartsData final : public UDataAsset
{
public:
	ECharaPartsLocation                           PartsLocation;                                     // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCharaPartsSubLocation                 SubLocation;                                       // 0x0031(0x001C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CA9[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Priority;                                          // 0x0050(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         OpacityMask;                                       // 0x0054(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CrtBoneScale;                                      // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AnkleCrtBoneScale;                                 // 0x005C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BreastPhysicsScale;                                // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         HairType;                                          // 0x0064(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         UnderwearType;                                     // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CAA[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   AnimClass;                                         // 0x0070(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StiffnessScale;                                    // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DampingScale;                                      // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   PhysicsAnimClass1;                                 // 0x00A0(0x0028)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   SubAnimClass1;                                     // 0x00C8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECharaPartsLocation                           PhysicsAnimClassLocation1;                         // 0x00F0(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECharaPartsLocation                           SubAnimClassLocation1;                             // 0x00F1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CAB[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SubStiffnessScale1;                                // 0x00F4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SubDampingScale1;                                  // 0x00F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CAC[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   PhysicsAnimClass2;                                 // 0x0100(0x0028)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   SubAnimClass2;                                     // 0x0128(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECharaPartsLocation                           PhysicsAnimClassLocation2;                         // 0x0150(0x0001)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECharaPartsLocation                           SubAnimClassLocation2;                             // 0x0151(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CAD[0x2];                                     // 0x0152(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SubStiffnessScale2;                                // 0x0154(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SubDampingScale2;                                  // 0x0158(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DefaultMeshID;                                     // 0x015C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStreamableRenderAsset>> MeshList;                                          // 0x0160(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UStreamableRenderAsset>> MeshMirrorList;                                    // 0x0170(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FCharaPartsCoordinateData>      CoordinateList;                                    // 0x0180(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCharaPartsColorListBase*               ColorListAsset;                                    // 0x0190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCharaPartsColorData>           ColorList;                                         // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCharaPartsExtraColorData>      ExtraColorList_DEPRICATED;                         // 0x01A8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UCharaPartsMaterialSet>> MaterialSetList;                                   // 0x01B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UCharaPartsColorListBase>> MaterialColorListAsset;                            // 0x01C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                          bIsUsingSocksMaterial;                             // 0x01D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CAE[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsOffsetList*                  OffsetListAsset;                                   // 0x01E0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataAsset>              FacialAnimationSet;                                // 0x01E8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPoseAsset>              FacialPoseAssetEye;                                // 0x0210(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPoseAsset>              FacialPoseAssetBrow;                               // 0x0238(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPoseAsset>              FacialPoseAssetMouth;                              // 0x0260(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPoseAsset>              FacialPoseAssetAdj;                                // 0x0288(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPoseAsset>              FacialPoseAssetEyelid;                             // 0x02B0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPoseAsset>              FacialPoseAssetDfm;                                // 0x02D8(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   HairAnimClass;                                     // 0x0300(0x0028)(Deprecated, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UBlendSpace>             TiltPanBlendSpace;                                 // 0x0328(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCharaPartsMaterialsList*               CharaPartsMaterialsList;                           // 0x0350(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CAF[0x3];                                     // 0x0358(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	ECharaPartsAccessoryLocation                  AccessoryLocation;                                 // 0x035B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CB0[0x4];                                     // 0x035C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FCharaPartsColorData GetDefaultColor(int32 Param_Index);

	void GetCheckedSubLocationArray(TArray<ECharaPartsLocation>* CharaPartsLocationArray) const;
	const struct FLinearColor GetPartsMaterialColor(int32 ColorParameterIndex, int32 HueIndex, int32 MaterialColorListIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CharaPartsData">();
	}
	static class UCharaPartsData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaPartsData>();
	}
};
static_assert(alignof(UCharaPartsData) == 0x000008, "Wrong alignment on UCharaPartsData");
static_assert(sizeof(UCharaPartsData) == 0x000360, "Wrong size on UCharaPartsData");
static_assert(offsetof(UCharaPartsData, PartsLocation) == 0x000030, "Member 'UCharaPartsData::PartsLocation' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubLocation) == 0x000031, "Member 'UCharaPartsData::SubLocation' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, Priority) == 0x000050, "Member 'UCharaPartsData::Priority' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, OpacityMask) == 0x000054, "Member 'UCharaPartsData::OpacityMask' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, CrtBoneScale) == 0x000058, "Member 'UCharaPartsData::CrtBoneScale' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, AnkleCrtBoneScale) == 0x00005C, "Member 'UCharaPartsData::AnkleCrtBoneScale' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, BreastPhysicsScale) == 0x000060, "Member 'UCharaPartsData::BreastPhysicsScale' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, HairType) == 0x000064, "Member 'UCharaPartsData::HairType' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, UnderwearType) == 0x000068, "Member 'UCharaPartsData::UnderwearType' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, AnimClass) == 0x000070, "Member 'UCharaPartsData::AnimClass' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, StiffnessScale) == 0x000098, "Member 'UCharaPartsData::StiffnessScale' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, DampingScale) == 0x00009C, "Member 'UCharaPartsData::DampingScale' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, PhysicsAnimClass1) == 0x0000A0, "Member 'UCharaPartsData::PhysicsAnimClass1' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubAnimClass1) == 0x0000C8, "Member 'UCharaPartsData::SubAnimClass1' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, PhysicsAnimClassLocation1) == 0x0000F0, "Member 'UCharaPartsData::PhysicsAnimClassLocation1' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubAnimClassLocation1) == 0x0000F1, "Member 'UCharaPartsData::SubAnimClassLocation1' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubStiffnessScale1) == 0x0000F4, "Member 'UCharaPartsData::SubStiffnessScale1' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubDampingScale1) == 0x0000F8, "Member 'UCharaPartsData::SubDampingScale1' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, PhysicsAnimClass2) == 0x000100, "Member 'UCharaPartsData::PhysicsAnimClass2' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubAnimClass2) == 0x000128, "Member 'UCharaPartsData::SubAnimClass2' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, PhysicsAnimClassLocation2) == 0x000150, "Member 'UCharaPartsData::PhysicsAnimClassLocation2' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubAnimClassLocation2) == 0x000151, "Member 'UCharaPartsData::SubAnimClassLocation2' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubStiffnessScale2) == 0x000154, "Member 'UCharaPartsData::SubStiffnessScale2' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, SubDampingScale2) == 0x000158, "Member 'UCharaPartsData::SubDampingScale2' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, DefaultMeshID) == 0x00015C, "Member 'UCharaPartsData::DefaultMeshID' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, MeshList) == 0x000160, "Member 'UCharaPartsData::MeshList' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, MeshMirrorList) == 0x000170, "Member 'UCharaPartsData::MeshMirrorList' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, CoordinateList) == 0x000180, "Member 'UCharaPartsData::CoordinateList' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, ColorListAsset) == 0x000190, "Member 'UCharaPartsData::ColorListAsset' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, ColorList) == 0x000198, "Member 'UCharaPartsData::ColorList' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, ExtraColorList_DEPRICATED) == 0x0001A8, "Member 'UCharaPartsData::ExtraColorList_DEPRICATED' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, MaterialSetList) == 0x0001B8, "Member 'UCharaPartsData::MaterialSetList' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, MaterialColorListAsset) == 0x0001C8, "Member 'UCharaPartsData::MaterialColorListAsset' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, bIsUsingSocksMaterial) == 0x0001D8, "Member 'UCharaPartsData::bIsUsingSocksMaterial' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, OffsetListAsset) == 0x0001E0, "Member 'UCharaPartsData::OffsetListAsset' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, FacialAnimationSet) == 0x0001E8, "Member 'UCharaPartsData::FacialAnimationSet' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, FacialPoseAssetEye) == 0x000210, "Member 'UCharaPartsData::FacialPoseAssetEye' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, FacialPoseAssetBrow) == 0x000238, "Member 'UCharaPartsData::FacialPoseAssetBrow' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, FacialPoseAssetMouth) == 0x000260, "Member 'UCharaPartsData::FacialPoseAssetMouth' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, FacialPoseAssetAdj) == 0x000288, "Member 'UCharaPartsData::FacialPoseAssetAdj' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, FacialPoseAssetEyelid) == 0x0002B0, "Member 'UCharaPartsData::FacialPoseAssetEyelid' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, FacialPoseAssetDfm) == 0x0002D8, "Member 'UCharaPartsData::FacialPoseAssetDfm' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, HairAnimClass) == 0x000300, "Member 'UCharaPartsData::HairAnimClass' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, TiltPanBlendSpace) == 0x000328, "Member 'UCharaPartsData::TiltPanBlendSpace' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, CharaPartsMaterialsList) == 0x000350, "Member 'UCharaPartsData::CharaPartsMaterialsList' has a wrong offset!");
static_assert(offsetof(UCharaPartsData, AccessoryLocation) == 0x00035B, "Member 'UCharaPartsData::AccessoryLocation' has a wrong offset!");

}

