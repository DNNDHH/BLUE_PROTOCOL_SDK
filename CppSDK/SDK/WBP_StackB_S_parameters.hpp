#pragma once

 

// Package: WBP_StackB_S

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_StackB_S.WBP_StackB_S_C.ExecuteUbergraph_WBP_StackB_S
// 0x0008 (0x0008 - 0x0000)
struct WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S) == 0x000004, "Wrong alignment on WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S");
static_assert(sizeof(WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S) == 0x000008, "Wrong size on WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S");
static_assert(offsetof(WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S, EntryPoint) == 0x000000, "Member 'WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_StackB_S_C_ExecuteUbergraph_WBP_StackB_S::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_StackB_S.WBP_StackB_S_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_StackB_S_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_S_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_StackB_S_C_PreConstruct");
static_assert(sizeof(WBP_StackB_S_C_PreConstruct) == 0x000001, "Wrong size on WBP_StackB_S_C_PreConstruct");
static_assert(offsetof(WBP_StackB_S_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_StackB_S_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_StackB_S.WBP_StackB_S_C.Set Stack BIcon Base
// 0x0218 (0x0218 - 0x0000)
struct WBP_StackB_S_C_Set_Stack_BIcon_Base final
{
public:
	int32                                         Param_StackNum;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEffectiveDisplay;                                // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStackBEnableType                           Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92D5[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92D6[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMapInfo                             CallFunc_GetCurrentMapInfo_OutMapInfo;             // 0x0030(0x01E0)()
	bool                                          CallFunc_GetCurrentMapInfo_ReturnValue;            // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92D7[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_S_C_Set_Stack_BIcon_Base) == 0x000008, "Wrong alignment on WBP_StackB_S_C_Set_Stack_BIcon_Base");
static_assert(sizeof(WBP_StackB_S_C_Set_Stack_BIcon_Base) == 0x000218, "Wrong size on WBP_StackB_S_C_Set_Stack_BIcon_Base");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, Param_StackNum) == 0x000000, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::Param_StackNum' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, IsEffectiveDisplay) == 0x000004, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, Temp_byte_Variable) == 0x000005, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, Temp_int_Variable) == 0x000020, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, Temp_int_Variable_1) == 0x000024, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, Temp_int_Variable_2) == 0x000028, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, CallFunc_GetCurrentMapInfo_OutMapInfo) == 0x000030, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::CallFunc_GetCurrentMapInfo_OutMapInfo' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, CallFunc_GetCurrentMapInfo_ReturnValue) == 0x000210, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::CallFunc_GetCurrentMapInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Base, K2Node_Select_Default) == 0x000214, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Base::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StackB_S.WBP_StackB_S_C.Set Stack BIcon Effect
// 0x0004 (0x0004 - 0x0000)
struct WBP_StackB_S_C_Set_Stack_BIcon_Effect final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_S_C_Set_Stack_BIcon_Effect) == 0x000004, "Wrong alignment on WBP_StackB_S_C_Set_Stack_BIcon_Effect");
static_assert(sizeof(WBP_StackB_S_C_Set_Stack_BIcon_Effect) == 0x000004, "Wrong size on WBP_StackB_S_C_Set_Stack_BIcon_Effect");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_Effect, Param_Index) == 0x000000, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_Effect::Param_Index' has a wrong offset!");

// Function WBP_StackB_S.WBP_StackB_S_C.Set Stack BIcon One Item
// 0x0128 (0x0128 - 0x0000)
struct WBP_StackB_S_C_Set_Stack_BIcon_One_Item final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEffectiveDisplay;                                // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Visible;                                           // 0x0119(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92D8[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x0120(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStackBIconOneItemBase_OutIsVisible;    // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item) == 0x000008, "Wrong alignment on WBP_StackB_S_C_Set_Stack_BIcon_One_Item");
static_assert(sizeof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item) == 0x000128, "Wrong size on WBP_StackB_S_C_Set_Stack_BIcon_One_Item");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item, Info) == 0x000000, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_One_Item::Info' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item, IsEffectiveDisplay) == 0x000118, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_One_Item::IsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item, Visible) == 0x000119, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_One_Item::Visible' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item, CallFunc_GetStackBNum_ReturnValue) == 0x00011C, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_One_Item::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item, CallFunc_GetStackBMax_ReturnValue) == 0x000120, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_One_Item::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_Set_Stack_BIcon_One_Item, CallFunc_SetStackBIconOneItemBase_OutIsVisible) == 0x000124, "Member 'WBP_StackB_S_C_Set_Stack_BIcon_One_Item::CallFunc_SetStackBIconOneItemBase_OutIsVisible' has a wrong offset!");

// Function WBP_StackB_S.WBP_StackB_S_C.SetNoneVisible
// 0x0005 (0x0005 - 0x0000)
struct WBP_StackB_S_C_SetNoneVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_StackB_S_C_SetNoneVisible) == 0x000001, "Wrong alignment on WBP_StackB_S_C_SetNoneVisible");
static_assert(sizeof(WBP_StackB_S_C_SetNoneVisible) == 0x000005, "Wrong size on WBP_StackB_S_C_SetNoneVisible");
static_assert(offsetof(WBP_StackB_S_C_SetNoneVisible, Visible) == 0x000000, "Member 'WBP_StackB_S_C_SetNoneVisible::Visible' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetNoneVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WBP_StackB_S_C_SetNoneVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetNoneVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WBP_StackB_S_C_SetNoneVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetNoneVisible, Temp_bool_Variable) == 0x000003, "Member 'WBP_StackB_S_C_SetNoneVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetNoneVisible, K2Node_Select_Default) == 0x000004, "Member 'WBP_StackB_S_C_SetNoneVisible::K2Node_Select_Default' has a wrong offset!");

// Function WBP_StackB_S.WBP_StackB_S_C.SetStackBIconOneItemBase
// 0x002C (0x002C - 0x0000)
struct WBP_StackB_S_C_SetStackBIconOneItemBase final
{
public:
	EItemType                                     InItemType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92D9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InStackBNum;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBMax;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsEffectiveDisplay;                              // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutIsVisible;                                      // 0x000D(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalEffectiveDisplay;                            // 0x000E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92DA[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92DB[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidStackB_ReturnValue;                  // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidMountStackB_ReturnValue;             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92DC[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_StackB_S_C_SetStackBIconOneItemBase) == 0x000004, "Wrong alignment on WBP_StackB_S_C_SetStackBIconOneItemBase");
static_assert(sizeof(WBP_StackB_S_C_SetStackBIconOneItemBase) == 0x00002C, "Wrong size on WBP_StackB_S_C_SetStackBIconOneItemBase");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, InItemType) == 0x000000, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::InItemType' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, InStackBNum) == 0x000004, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::InStackBNum' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, InStackBMax) == 0x000008, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::InStackBMax' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, InIsEffectiveDisplay) == 0x00000C, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::InIsEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, OutIsVisible) == 0x00000D, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::OutIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, bLocalEffectiveDisplay) == 0x00000E, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::bLocalEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, Temp_int_Variable) == 0x000010, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000014, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, Temp_int_Variable_1) == 0x000018, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, Temp_bool_Variable) == 0x00001C, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_ValidStackB_ReturnValue) == 0x00001D, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_ValidStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_ValidMountStackB_ReturnValue) == 0x00001E, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_ValidMountStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_GetVisibility_ReturnValue) == 0x00001F, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000020, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000022, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, K2Node_Select_Default) == 0x000024, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_StackB_S_C_SetStackBIconOneItemBase, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000028, "Member 'WBP_StackB_S_C_SetStackBIconOneItemBase::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

}

