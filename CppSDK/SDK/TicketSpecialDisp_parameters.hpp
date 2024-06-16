#pragma once

 

// Package: TicketSpecialDisp

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function TicketSpecialDisp.TicketSpecialDisp_C.SetInfo
// 0x0160 (0x0160 - 0x0000)
struct TicketSpecialDisp_C_SetInfo final
{
public:
	struct FOwnItemInfo                           Info;                                              // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_689A[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0130(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0148(0x0018)()
};
static_assert(alignof(TicketSpecialDisp_C_SetInfo) == 0x000008, "Wrong alignment on TicketSpecialDisp_C_SetInfo");
static_assert(sizeof(TicketSpecialDisp_C_SetInfo) == 0x000160, "Wrong size on TicketSpecialDisp_C_SetInfo");
static_assert(offsetof(TicketSpecialDisp_C_SetInfo, Info) == 0x000000, "Member 'TicketSpecialDisp_C_SetInfo::Info' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetInfo, CallFunc_GetItemLevel_ReturnValue) == 0x000118, "Member 'TicketSpecialDisp_C_SetInfo::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetInfo, CallFunc_SetSpecialEffectText_SpecialName) == 0x000120, "Member 'TicketSpecialDisp_C_SetInfo::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetInfo, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000130, "Member 'TicketSpecialDisp_C_SetInfo::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000148, "Member 'TicketSpecialDisp_C_SetInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function TicketSpecialDisp.TicketSpecialDisp_C.SetChangeColor
// 0x0080 (0x0080 - 0x0000)
struct TicketSpecialDisp_C_SetChangeColor final
{
public:
	bool                                          bChangeColor;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_689B[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};
static_assert(alignof(TicketSpecialDisp_C_SetChangeColor) == 0x000008, "Wrong alignment on TicketSpecialDisp_C_SetChangeColor");
static_assert(sizeof(TicketSpecialDisp_C_SetChangeColor) == 0x000080, "Wrong size on TicketSpecialDisp_C_SetChangeColor");
static_assert(offsetof(TicketSpecialDisp_C_SetChangeColor, bChangeColor) == 0x000000, "Member 'TicketSpecialDisp_C_SetChangeColor::bChangeColor' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetChangeColor, Temp_bool_Variable) == 0x000001, "Member 'TicketSpecialDisp_C_SetChangeColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetChangeColor, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'TicketSpecialDisp_C_SetChangeColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetChangeColor, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'TicketSpecialDisp_C_SetChangeColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(TicketSpecialDisp_C_SetChangeColor, K2Node_Select_Default) == 0x000058, "Member 'TicketSpecialDisp_C_SetChangeColor::K2Node_Select_Default' has a wrong offset!");

}

