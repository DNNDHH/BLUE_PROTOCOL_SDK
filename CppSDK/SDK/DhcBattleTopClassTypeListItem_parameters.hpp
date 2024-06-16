#pragma once

 

// Package: DhcBattleTopClassTypeListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature final
{
public:
	class UDhcBattleTopClassTypeListItem_C*       InSelf;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature, InSelf) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_OnClicked__DelegateSignature::InSelf' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.ExecuteUbergraph_DhcBattleTopClassTypeListItem
// 0x0004 (0x0004 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem) == 0x000004, "Wrong alignment on DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem) == 0x000004, "Wrong size on DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem, EntryPoint) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_ExecuteUbergraph_DhcBattleTopClassTypeListItem::EntryPoint' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.Setup
// 0x0128 (0x0128 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_Setup final
{
public:
	struct FSBDhcBattleHighScoreInfo              InScoreInfo;                                       // 0x0000(0x00D8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D55[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D56[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00E8(0x0018)()
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0110(0x0018)()
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_Setup) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeListItem_C_Setup");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_Setup) == 0x000128, "Wrong size on DhcBattleTopClassTypeListItem_C_Setup");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_Setup, InScoreInfo) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_Setup::InScoreInfo' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_Setup, CallFunc_MakeLiteralBool_ReturnValue) == 0x0000D8, "Member 'DhcBattleTopClassTypeListItem_C_Setup::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_Setup, CallFunc_Clamp_ReturnValue) == 0x0000DC, "Member 'DhcBattleTopClassTypeListItem_C_Setup::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_Setup, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'DhcBattleTopClassTypeListItem_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_Setup, CallFunc_Conv_IntToText_ReturnValue) == 0x0000E8, "Member 'DhcBattleTopClassTypeListItem_C_Setup::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_Setup, CallFunc_GetClassNameText_ReturnValue) == 0x000100, "Member 'DhcBattleTopClassTypeListItem_C_Setup::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000110, "Member 'DhcBattleTopClassTypeListItem_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetupAsEmpty
// 0x0060 (0x0060 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_SetupAsEmpty final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D57[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeListItem_C_SetupAsEmpty");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty) == 0x000060, "Wrong size on DhcBattleTopClassTypeListItem_C_SetupAsEmpty");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty, InClassType) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_SetupAsEmpty::InClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'DhcBattleTopClassTypeListItem_C_SetupAsEmpty::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'DhcBattleTopClassTypeListItem_C_SetupAsEmpty::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty, CallFunc_GetClassNameText_ReturnValue) == 0x000030, "Member 'DhcBattleTopClassTypeListItem_C_SetupAsEmpty::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'DhcBattleTopClassTypeListItem_C_SetupAsEmpty::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetupAsEmpty, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'DhcBattleTopClassTypeListItem_C_SetupAsEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetIsCurrPlayerClassType
// 0x0014 (0x0014 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType final
{
public:
	bool                                          InIsCurrPlayerClassType;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D58[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D59[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType) == 0x000004, "Wrong alignment on DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType) == 0x000014, "Wrong size on DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType, InIsCurrPlayerClassType) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType::InIsCurrPlayerClassType' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType, Temp_int_Variable) == 0x000004, "Member 'DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType, Temp_int_Variable_1) == 0x000008, "Member 'DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType, Temp_bool_Variable) == 0x00000C, "Member 'DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType, K2Node_Select_Default) == 0x000010, "Member 'DhcBattleTopClassTypeListItem_C_SetIsCurrPlayerClassType::K2Node_Select_Default' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetSelected
// 0x0088 (0x0088 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_SetSelected final
{
public:
	bool                                          InIsSelected;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D5A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       LocalCanvasSlot;                                   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D5B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D5C[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D5D[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              K2Node_Select_Default;                             // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D5E[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D5F[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_SetSelected) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeListItem_C_SetSelected");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_SetSelected) == 0x000088, "Wrong size on DhcBattleTopClassTypeListItem_C_SetSelected");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, InIsSelected) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::InIsSelected' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, LocalCanvasSlot) == 0x000008, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::LocalCanvasSlot' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_float_Variable) == 0x000010, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_float_Variable_1) == 0x000014, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_bool_Variable) == 0x000018, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_int_Variable) == 0x00001C, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_int_Variable_1) == 0x000020, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_struct_Variable) == 0x000024, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_bool_Variable_1) == 0x00002C, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_struct_Variable_1) == 0x000030, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_GetPosition_ReturnValue) == 0x000038, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_BreakVector2D_X) == 0x000040, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_BreakVector2D_Y) == 0x000044, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, Temp_bool_Variable_2) == 0x000048, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, K2Node_Select_Default) == 0x00004C, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, K2Node_Select_Default_1) == 0x000054, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_MakeVector2D_ReturnValue) == 0x000058, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000068, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, K2Node_Select_Default_2) == 0x000074, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000078, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_IsValid_ReturnValue_2) == 0x000080, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_IsValid_ReturnValue_3) == 0x000081, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetSelected, CallFunc_IsValid_ReturnValue_4) == 0x000082, "Member 'DhcBattleTopClassTypeListItem_C_SetSelected::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.SetTextAndClassTypeIconColor
// 0x00C8 (0x00C8 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor final
{
public:
	bool                                          InIsHovered;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D60[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            LocalSlateColor;                                   // 0x0008(0x0028)(Edit, BlueprintVisible)
	struct FLinearColor                           LocalLinearColor;                                  // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D61[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D62[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakColor_R;                             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R_1;                           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G_1;                           // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B_1;                           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A_1;                           // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor) == 0x0000C8, "Wrong size on DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, InIsHovered) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::InIsHovered' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, LocalSlateColor) == 0x000008, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::LocalSlateColor' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, LocalLinearColor) == 0x000030, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::LocalLinearColor' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, Temp_bool_Variable) == 0x000040, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_IsValid_ReturnValue_1) == 0x000071, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_R) == 0x000074, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_G) == 0x000078, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_B) == 0x00007C, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_A) == 0x000080, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_R_1) == 0x000084, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_R_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_G_1) == 0x000088, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_G_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_B_1) == 0x00008C, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_B_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_BreakColor_A_1) == 0x000090, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_BreakColor_A_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, K2Node_MakeStruct_LinearColor) == 0x000094, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, K2Node_MakeStruct_LinearColor_1) == 0x0000A4, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, K2Node_Select_Default) == 0x0000B4, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_IsValid_ReturnValue_2) == 0x0000C4, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor, CallFunc_IsValid_ReturnValue_3) == 0x0000C5, "Member 'DhcBattleTopClassTypeListItem_C_SetTextAndClassTypeIconColor::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetScoreInfo
// 0x00D8 (0x00D8 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_GetScoreInfo final
{
public:
	struct FSBDhcBattleHighScoreInfo              OutScoreInfo;                                      // 0x0000(0x00D8)(Parm, OutParm)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_GetScoreInfo) == 0x000008, "Wrong alignment on DhcBattleTopClassTypeListItem_C_GetScoreInfo");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_GetScoreInfo) == 0x0000D8, "Wrong size on DhcBattleTopClassTypeListItem_C_GetScoreInfo");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_GetScoreInfo, OutScoreInfo) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_GetScoreInfo::OutScoreInfo' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.IsScoreInfoEmpty
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty final
{
public:
	bool                                          OutIsScoreInfoEmpty;                               // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty) == 0x000001, "Wrong alignment on DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty) == 0x000001, "Wrong size on DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty, OutIsScoreInfoEmpty) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_IsScoreInfoEmpty::OutIsScoreInfoEmpty' has a wrong offset!");

// Function DhcBattleTopClassTypeListItem.DhcBattleTopClassTypeListItem_C.GetClassType
// 0x0001 (0x0001 - 0x0000)
struct DhcBattleTopClassTypeListItem_C_GetClassType final
{
public:
	ESBClassType                                  OutClassType;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DhcBattleTopClassTypeListItem_C_GetClassType) == 0x000001, "Wrong alignment on DhcBattleTopClassTypeListItem_C_GetClassType");
static_assert(sizeof(DhcBattleTopClassTypeListItem_C_GetClassType) == 0x000001, "Wrong size on DhcBattleTopClassTypeListItem_C_GetClassType");
static_assert(offsetof(DhcBattleTopClassTypeListItem_C_GetClassType, OutClassType) == 0x000000, "Member 'DhcBattleTopClassTypeListItem_C_GetClassType::OutClassType' has a wrong offset!");

}

