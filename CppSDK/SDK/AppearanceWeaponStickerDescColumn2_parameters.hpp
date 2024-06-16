#pragma once

 

// Package: AppearanceWeaponStickerDescColumn2

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.ExecuteUbergraph_AppearanceWeaponStickerDescColumn2
// 0x0008 (0x0008 - 0x0000)
struct AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2) == 0x000004, "Wrong alignment on AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2");
static_assert(sizeof(AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2) == 0x000008, "Wrong size on AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2, EntryPoint) == 0x000000, "Member 'AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2::EntryPoint' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AppearanceWeaponStickerDescColumn2_C_ExecuteUbergraph_AppearanceWeaponStickerDescColumn2::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerDescColumn2_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerDescColumn2_C_PreConstruct) == 0x000001, "Wrong alignment on AppearanceWeaponStickerDescColumn2_C_PreConstruct");
static_assert(sizeof(AppearanceWeaponStickerDescColumn2_C_PreConstruct) == 0x000001, "Wrong size on AppearanceWeaponStickerDescColumn2_C_PreConstruct");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AppearanceWeaponStickerDescColumn2_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetWeaponStickerDesc
// 0x0248 (0x0248 - 0x0000)
struct AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc final
{
public:
	struct FSBWeaponItemData                      InWeaponData;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          TmpIsIndefinite;                                   // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DA1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              TmpNowDateTime;                                    // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FItemMasterData                        TmpWeaponStickerItemMasterData;                    // 0x0060(0x00D0)(Edit, BlueprintVisible)
	int32                                         TmpWeaponStickerId;                                // 0x0130(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DA2[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              TmpReleaseTime;                                    // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DA3[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0158(0x0018)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DA4[0x5];                                     // 0x0173(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0178(0x00D0)()
};
static_assert(alignof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc) == 0x000008, "Wrong alignment on AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc");
static_assert(sizeof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc) == 0x000248, "Wrong size on AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, InWeaponData) == 0x000000, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::InWeaponData' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, TmpIsIndefinite) == 0x000050, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::TmpIsIndefinite' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, TmpNowDateTime) == 0x000058, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::TmpNowDateTime' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, TmpWeaponStickerItemMasterData) == 0x000060, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::TmpWeaponStickerItemMasterData' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, TmpWeaponStickerId) == 0x000130, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::TmpWeaponStickerId' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, TmpReleaseTime) == 0x000138, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::TmpReleaseTime' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, CallFunc_GetItemText_ReturnValue) == 0x000140, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000150, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, CallFunc_Conv_StringToText_ReturnValue) == 0x000158, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, CallFunc_Not_PreBool_ReturnValue) == 0x000170, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, CallFunc_SetDateTime_ReturnValue) == 0x000171, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, CallFunc_FindItemMaster_bIsValid) == 0x000172, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc, CallFunc_FindItemMaster_ItemMaster) == 0x000178, "Member 'AppearanceWeaponStickerDescColumn2_C_SetWeaponStickerDesc::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");

// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetIsStickerIndefinite
// 0x0010 (0x0010 - 0x0000)
struct AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite final
{
public:
	bool                                          InIsIndefinite;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DA5[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite) == 0x000004, "Wrong alignment on AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite");
static_assert(sizeof(AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite) == 0x000010, "Wrong size on AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite, InIsIndefinite) == 0x000000, "Member 'AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite::InIsIndefinite' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite, Temp_bool_Variable) == 0x000001, "Member 'AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite, Temp_int_Variable) == 0x000004, "Member 'AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite, Temp_int_Variable_1) == 0x000008, "Member 'AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite, K2Node_Select_Default) == 0x00000C, "Member 'AppearanceWeaponStickerDescColumn2_C_SetIsStickerIndefinite::K2Node_Select_Default' has a wrong offset!");

// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.SetStickerBtn
// 0x0002 (0x0002 - 0x0000)
struct AppearanceWeaponStickerDescColumn2_C_SetStickerBtn final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerDescColumn2_C_SetStickerBtn) == 0x000001, "Wrong alignment on AppearanceWeaponStickerDescColumn2_C_SetStickerBtn");
static_assert(sizeof(AppearanceWeaponStickerDescColumn2_C_SetStickerBtn) == 0x000002, "Wrong size on AppearanceWeaponStickerDescColumn2_C_SetStickerBtn");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetStickerBtn, bOn) == 0x000000, "Member 'AppearanceWeaponStickerDescColumn2_C_SetStickerBtn::bOn' has a wrong offset!");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_SetStickerBtn, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'AppearanceWeaponStickerDescColumn2_C_SetStickerBtn::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function AppearanceWeaponStickerDescColumn2.AppearanceWeaponStickerDescColumn2_C.GetStickerUse
// 0x0001 (0x0001 - 0x0000)
struct AppearanceWeaponStickerDescColumn2_C_GetStickerUse final
{
public:
	bool                                          OutIsStickerUse;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AppearanceWeaponStickerDescColumn2_C_GetStickerUse) == 0x000001, "Wrong alignment on AppearanceWeaponStickerDescColumn2_C_GetStickerUse");
static_assert(sizeof(AppearanceWeaponStickerDescColumn2_C_GetStickerUse) == 0x000001, "Wrong size on AppearanceWeaponStickerDescColumn2_C_GetStickerUse");
static_assert(offsetof(AppearanceWeaponStickerDescColumn2_C_GetStickerUse, OutIsStickerUse) == 0x000000, "Member 'AppearanceWeaponStickerDescColumn2_C_GetStickerUse::OutIsStickerUse' has a wrong offset!");

}

