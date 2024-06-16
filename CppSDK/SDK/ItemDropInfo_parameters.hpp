#pragma once

 

// Package: ItemDropInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ItemDropInfo.ItemDropInfo_C.ExecuteUbergraph_ItemDropInfo
// 0x0100 (0x0100 - 0x0000)
struct ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DDE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ItemId;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DDF[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0018(0x00D0)()
	class FText                                   CallFunc_GetTexts_Detail1;                         // 0x00E8(0x0018)()
};
static_assert(alignof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo) == 0x000008, "Wrong alignment on ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo");
static_assert(sizeof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo) == 0x000100, "Wrong size on ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, EntryPoint) == 0x000000, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000005, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, K2Node_CustomEvent_ItemId) == 0x000010, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::K2Node_CustomEvent_ItemId' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, CallFunc_GetItemMasterData_IsExists) == 0x000014, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, CallFunc_GetItemMasterData_ReturnValue) == 0x000018, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo, CallFunc_GetTexts_Detail1) == 0x0000E8, "Member 'ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo::CallFunc_GetTexts_Detail1' has a wrong offset!");

// Function ItemDropInfo.ItemDropInfo_C.Set ItemId
// 0x0004 (0x0004 - 0x0000)
struct ItemDropInfo_C_Set_ItemId final
{
public:
	int32                                         Param_ItemId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemDropInfo_C_Set_ItemId) == 0x000004, "Wrong alignment on ItemDropInfo_C_Set_ItemId");
static_assert(sizeof(ItemDropInfo_C_Set_ItemId) == 0x000004, "Wrong size on ItemDropInfo_C_Set_ItemId");
static_assert(offsetof(ItemDropInfo_C_Set_ItemId, Param_ItemId) == 0x000000, "Member 'ItemDropInfo_C_Set_ItemId::Param_ItemId' has a wrong offset!");

// Function ItemDropInfo.ItemDropInfo_C.GetTexts
// 0x0160 (0x0160 - 0x0000)
struct ItemDropInfo_C_GetTexts final
{
public:
	struct FItemMasterData                        ItemMasterData;                                    // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Detail1;                                           // 0x00D0(0x0018)(Parm, OutParm)
	class FText                                   Detail;                                            // 0x00E8(0x0018)(Edit, BlueprintVisible)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DE0[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemDropInfo_C_GetTexts) == 0x000008, "Wrong alignment on ItemDropInfo_C_GetTexts");
static_assert(sizeof(ItemDropInfo_C_GetTexts) == 0x000160, "Wrong size on ItemDropInfo_C_GetTexts");
static_assert(offsetof(ItemDropInfo_C_GetTexts, ItemMasterData) == 0x000000, "Member 'ItemDropInfo_C_GetTexts::ItemMasterData' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, Detail1) == 0x0000D0, "Member 'ItemDropInfo_C_GetTexts::Detail1' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, Detail) == 0x0000E8, "Member 'ItemDropInfo_C_GetTexts::Detail' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, CallFunc_GetAdventurerRank_ReturnValue) == 0x000100, "Member 'ItemDropInfo_C_GetTexts::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, CallFunc_GetTextFromAsset_ReturnValue) == 0x000108, "Member 'ItemDropInfo_C_GetTexts::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, CallFunc_GetItemText_ReturnValue) == 0x000118, "Member 'ItemDropInfo_C_GetTexts::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'ItemDropInfo_C_GetTexts::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'ItemDropInfo_C_GetTexts::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000158, "Member 'ItemDropInfo_C_GetTexts::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetTexts, CallFunc_Less_IntInt_ReturnValue) == 0x000159, "Member 'ItemDropInfo_C_GetTexts::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ItemDropInfo.ItemDropInfo_C.GetToolTipWidget_0
// 0x0040 (0x0040 - 0x0000)
struct ItemDropInfo_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class UWBP_CommonToolTipDetail_Variable_C*    CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemDropInfo_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on ItemDropInfo_C_GetToolTipWidget_0");
static_assert(sizeof(ItemDropInfo_C_GetToolTipWidget_0) == 0x000040, "Wrong size on ItemDropInfo_C_GetToolTipWidget_0");
static_assert(offsetof(ItemDropInfo_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'ItemDropInfo_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetToolTipWidget_0, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'ItemDropInfo_C_GetToolTipWidget_0::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ItemDropInfo_C_GetToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000030, "Member 'ItemDropInfo_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'ItemDropInfo_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemDropInfo_C_GetToolTipWidget_0, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'ItemDropInfo_C_GetToolTipWidget_0::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

