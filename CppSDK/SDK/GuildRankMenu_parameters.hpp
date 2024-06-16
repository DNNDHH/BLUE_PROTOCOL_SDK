#pragma once

 

// Package: GuildRankMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildRankMenu.GuildRankMenu_C.ExecuteUbergraph_GuildRankMenu
// 0x0004 (0x0004 - 0x0000)
struct GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu) == 0x000004, "Wrong alignment on GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu");
static_assert(sizeof(GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu) == 0x000004, "Wrong size on GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu");
static_assert(offsetof(GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu, EntryPoint) == 0x000000, "Member 'GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu::EntryPoint' has a wrong offset!");

// Function GuildRankMenu.GuildRankMenu_C.GetGuildComp
// 0x0018 (0x0018 - 0x0000)
struct GuildRankMenu_C_GetGuildComp final
{
public:
	class USBPlayerGuildComponent*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRankMenu_C_GetGuildComp) == 0x000008, "Wrong alignment on GuildRankMenu_C_GetGuildComp");
static_assert(sizeof(GuildRankMenu_C_GetGuildComp) == 0x000018, "Wrong size on GuildRankMenu_C_GetGuildComp");
static_assert(offsetof(GuildRankMenu_C_GetGuildComp, ReturnValue) == 0x000000, "Member 'GuildRankMenu_C_GetGuildComp::ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GetGuildComp, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'GuildRankMenu_C_GetGuildComp::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GetGuildComp, CallFunc_GetGuildComponent_ReturnValue) == 0x000010, "Member 'GuildRankMenu_C_GetGuildComp::CallFunc_GetGuildComponent_ReturnValue' has a wrong offset!");

// Function GuildRankMenu.GuildRankMenu_C.Initialize
// 0x0148 (0x0148 - 0x0000)
struct GuildRankMenu_C_Initialize final
{
public:
	int32                                         BeforeExp;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextExp;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RemainExp;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E53[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E54[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0050(0x0018)()
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E55[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerGuildComponent*                CallFunc_GetGuildComp_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildData                             CallFunc_GetGuildData_ReturnValue;                 // 0x0080(0x00B8)()
	int32                                         CallFunc_BP_GetGuildRankFromExp_RemainExp;         // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetGuildRankFromExp_NeedExp;           // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BP_GetGuildRankFromExp_ReturnValue;       // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRankMenu_C_Initialize) == 0x000008, "Wrong alignment on GuildRankMenu_C_Initialize");
static_assert(sizeof(GuildRankMenu_C_Initialize) == 0x000148, "Wrong size on GuildRankMenu_C_Initialize");
static_assert(offsetof(GuildRankMenu_C_Initialize, BeforeExp) == 0x000000, "Member 'GuildRankMenu_C_Initialize::BeforeExp' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, NextExp) == 0x000004, "Member 'GuildRankMenu_C_Initialize::NextExp' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, RemainExp) == 0x000008, "Member 'GuildRankMenu_C_Initialize::RemainExp' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'GuildRankMenu_C_Initialize::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000028, "Member 'GuildRankMenu_C_Initialize::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00002C, "Member 'GuildRankMenu_C_Initialize::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000030, "Member 'GuildRankMenu_C_Initialize::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000038, "Member 'GuildRankMenu_C_Initialize::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000050, "Member 'GuildRankMenu_C_Initialize::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_GetMasterDataManager_IsValid) == 0x000068, "Member 'GuildRankMenu_C_Initialize::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'GuildRankMenu_C_Initialize::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_GetGuildComp_ReturnValue) == 0x000078, "Member 'GuildRankMenu_C_Initialize::CallFunc_GetGuildComp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_GetGuildData_ReturnValue) == 0x000080, "Member 'GuildRankMenu_C_Initialize::CallFunc_GetGuildData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_BP_GetGuildRankFromExp_RemainExp) == 0x000138, "Member 'GuildRankMenu_C_Initialize::CallFunc_BP_GetGuildRankFromExp_RemainExp' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_BP_GetGuildRankFromExp_NeedExp) == 0x00013C, "Member 'GuildRankMenu_C_Initialize::CallFunc_BP_GetGuildRankFromExp_NeedExp' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_Initialize, CallFunc_BP_GetGuildRankFromExp_ReturnValue) == 0x000140, "Member 'GuildRankMenu_C_Initialize::CallFunc_BP_GetGuildRankFromExp_ReturnValue' has a wrong offset!");

// Function GuildRankMenu.GuildRankMenu_C.GenerateRankItems
// 0x0070 (0x0070 - 0x0000)
struct GuildRankMenu_C_GenerateRankItems final
{
public:
	TArray<struct FGuildRankUnlockMaster>         UnlockMasterData;                                  // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E56[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGuildRankItem_C*                       CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuildRankUnlockMaster                 CallFunc_Array_Get_Item;                           // 0x0030(0x0020)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E57[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuildRankUnlockMaster>         CallFunc_BP_GetGuildRankUnLockMaster_ReturnValue;  // 0x0060(0x0010)(ReferenceParm)
};
static_assert(alignof(GuildRankMenu_C_GenerateRankItems) == 0x000008, "Wrong alignment on GuildRankMenu_C_GenerateRankItems");
static_assert(sizeof(GuildRankMenu_C_GenerateRankItems) == 0x000070, "Wrong size on GuildRankMenu_C_GenerateRankItems");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, UnlockMasterData) == 0x000000, "Member 'GuildRankMenu_C_GenerateRankItems::UnlockMasterData' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GuildRankMenu_C_GenerateRankItems::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'GuildRankMenu_C_GenerateRankItems::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_Create_ReturnValue) == 0x000020, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_AddChild_ReturnValue) == 0x000028, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_Array_Get_Item) == 0x000030, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_GetMasterDataManager_IsValid) == 0x000055, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_GetMasterDataManager_ReturnValue) == 0x000058, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRankMenu_C_GenerateRankItems, CallFunc_BP_GetGuildRankUnLockMaster_ReturnValue) == 0x000060, "Member 'GuildRankMenu_C_GenerateRankItems::CallFunc_BP_GetGuildRankUnLockMaster_ReturnValue' has a wrong offset!");

}

