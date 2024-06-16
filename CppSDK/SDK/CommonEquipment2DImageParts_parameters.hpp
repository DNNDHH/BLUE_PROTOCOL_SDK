#pragma once

 

// Package: CommonEquipment2DImageParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.ExecuteUbergraph_CommonEquipment2DImageParts
// 0x0070 (0x0070 - 0x0000)
struct CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_80E9[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80EA[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InEquipmentId;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     K2Node_CustomEvent_InEquipmentItemType;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        K2Node_CustomEvent_InImagineType;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80EB[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0038(0x0028)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80EC[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts) == 0x000008, "Wrong alignment on CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts");
static_assert(sizeof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts) == 0x000070, "Wrong size on CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, EntryPoint) == 0x000000, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, Temp_object_Variable) == 0x000018, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_DynamicCast_AsTexture_2D) == 0x000020, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_Event_IsDesignTime) == 0x000029, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_CustomEvent_InEquipmentId) == 0x00002C, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_CustomEvent_InEquipmentId' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_CustomEvent_InEquipmentItemType) == 0x000030, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_CustomEvent_InEquipmentItemType' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_CustomEvent_InImagineType) == 0x000031, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_CustomEvent_InImagineType' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000032, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_SwitchEnum_CmpSuccess) == 0x000033, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000038, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_SwitchEnum_CmpSuccess_1) == 0x000060, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts, K2Node_CustomEvent_Loaded) == 0x000068, "Member 'CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts::K2Node_CustomEvent_Loaded' has a wrong offset!");

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.RequestEquipment2DImageLoad
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad final
{
public:
	int32                                         InEquipmentId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     InEquipmentItemType;                               // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        InImagineType;                                     // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad) == 0x000004, "Wrong alignment on CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad");
static_assert(sizeof(CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad) == 0x000008, "Wrong size on CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad");
static_assert(offsetof(CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad, InEquipmentId) == 0x000000, "Member 'CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad::InEquipmentId' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad, InEquipmentItemType) == 0x000004, "Member 'CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad::InEquipmentItemType' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad, InImagineType) == 0x000005, "Member 'CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad::InImagineType' has a wrong offset!");

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonEquipment2DImageParts_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipment2DImageParts_C_PreConstruct) == 0x000001, "Wrong alignment on CommonEquipment2DImageParts_C_PreConstruct");
static_assert(sizeof(CommonEquipment2DImageParts_C_PreConstruct) == 0x000001, "Wrong size on CommonEquipment2DImageParts_C_PreConstruct");
static_assert(offsetof(CommonEquipment2DImageParts_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonEquipment2DImageParts_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1
// 0x0008 (0x0008 - 0x0000)
struct CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1) == 0x000008, "Wrong alignment on CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1");
static_assert(sizeof(CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1) == 0x000008, "Wrong size on CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1");
static_assert(offsetof(CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1, Loaded) == 0x000000, "Member 'CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1::Loaded' has a wrong offset!");

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetWeapon2DImage
// 0x00D0 (0x00D0 - 0x0000)
struct CommonEquipment2DImageParts_C_SetWeapon2DImage final
{
public:
	int32                                         InWeaponID;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80ED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80EE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0018(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipment2DImageParts_C_SetWeapon2DImage) == 0x000008, "Wrong alignment on CommonEquipment2DImageParts_C_SetWeapon2DImage");
static_assert(sizeof(CommonEquipment2DImageParts_C_SetWeapon2DImage) == 0x0000D0, "Wrong size on CommonEquipment2DImageParts_C_SetWeapon2DImage");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetWeapon2DImage, InWeaponID) == 0x000000, "Member 'CommonEquipment2DImageParts_C_SetWeapon2DImage::InWeaponID' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetWeapon2DImage, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'CommonEquipment2DImageParts_C_SetWeapon2DImage::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetWeapon2DImage, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CommonEquipment2DImageParts_C_SetWeapon2DImage::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetWeapon2DImage, CallFunc_GetWeaponMasterData_IsExists) == 0x000010, "Member 'CommonEquipment2DImageParts_C_SetWeapon2DImage::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetWeapon2DImage, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000018, "Member 'CommonEquipment2DImageParts_C_SetWeapon2DImage::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetWeapon2DImage, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'CommonEquipment2DImageParts_C_SetWeapon2DImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetWeapon2DImage, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C9, "Member 'CommonEquipment2DImageParts_C_SetWeapon2DImage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImagine2DImage
// 0x00D0 (0x00D0 - 0x0000)
struct CommonEquipment2DImageParts_C_SetImagine2DImage final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80EF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F0[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0018(0x00B0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipment2DImageParts_C_SetImagine2DImage) == 0x000008, "Wrong alignment on CommonEquipment2DImageParts_C_SetImagine2DImage");
static_assert(sizeof(CommonEquipment2DImageParts_C_SetImagine2DImage) == 0x0000D0, "Wrong size on CommonEquipment2DImageParts_C_SetImagine2DImage");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetImagine2DImage, InImagineId) == 0x000000, "Member 'CommonEquipment2DImageParts_C_SetImagine2DImage::InImagineId' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetImagine2DImage, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'CommonEquipment2DImageParts_C_SetImagine2DImage::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetImagine2DImage, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CommonEquipment2DImageParts_C_SetImagine2DImage::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetImagine2DImage, CallFunc_FindMasterImagineData_IsExists) == 0x000010, "Member 'CommonEquipment2DImageParts_C_SetImagine2DImage::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetImagine2DImage, CallFunc_FindMasterImagineData_ReturnValue) == 0x000018, "Member 'CommonEquipment2DImageParts_C_SetImagine2DImage::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetImagine2DImage, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'CommonEquipment2DImageParts_C_SetImagine2DImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetImagine2DImage, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C9, "Member 'CommonEquipment2DImageParts_C_SetImagine2DImage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetItem2DImage
// 0x00F0 (0x00F0 - 0x0000)
struct CommonEquipment2DImageParts_C_SetItem2DImage final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F2[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0018(0x00D0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonEquipment2DImageParts_C_SetItem2DImage) == 0x000008, "Wrong alignment on CommonEquipment2DImageParts_C_SetItem2DImage");
static_assert(sizeof(CommonEquipment2DImageParts_C_SetItem2DImage) == 0x0000F0, "Wrong size on CommonEquipment2DImageParts_C_SetItem2DImage");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetItem2DImage, ItemId) == 0x000000, "Member 'CommonEquipment2DImageParts_C_SetItem2DImage::ItemId' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetItem2DImage, CallFunc_GetMasterDataManager_IsValid) == 0x000004, "Member 'CommonEquipment2DImageParts_C_SetItem2DImage::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetItem2DImage, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CommonEquipment2DImageParts_C_SetItem2DImage::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetItem2DImage, CallFunc_GetItemMasterData_IsExists) == 0x000010, "Member 'CommonEquipment2DImageParts_C_SetItem2DImage::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetItem2DImage, CallFunc_GetItemMasterData_ReturnValue) == 0x000018, "Member 'CommonEquipment2DImageParts_C_SetItem2DImage::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetItem2DImage, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'CommonEquipment2DImageParts_C_SetItem2DImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonEquipment2DImageParts_C_SetItem2DImage, CallFunc_Greater_IntInt_ReturnValue) == 0x0000E9, "Member 'CommonEquipment2DImageParts_C_SetItem2DImage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

