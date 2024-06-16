#pragma once

 

// Package: TimeLimitIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function TimeLimitIcon.TimeLimitIcon_C.GetToolTipWidget_0
// 0x0018 (0x0018 - 0x0000)
struct TimeLimitIcon_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ToolTip_RemainTime_C*              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(TimeLimitIcon_C_GetToolTipWidget_0) == 0x000008, "Wrong alignment on TimeLimitIcon_C_GetToolTipWidget_0");
static_assert(sizeof(TimeLimitIcon_C_GetToolTipWidget_0) == 0x000018, "Wrong size on TimeLimitIcon_C_GetToolTipWidget_0");
static_assert(offsetof(TimeLimitIcon_C_GetToolTipWidget_0, ReturnValue) == 0x000000, "Member 'TimeLimitIcon_C_GetToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeLimitIcon_C_GetToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000008, "Member 'TimeLimitIcon_C_GetToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeLimitIcon_C_GetToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'TimeLimitIcon_C_GetToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function TimeLimitIcon.TimeLimitIcon_C.SetTermId
// 0x0010 (0x0010 - 0x0000)
struct TimeLimitIcon_C_SetTermId final
{
public:
	class FString                                 InEventTermId;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeLimitIcon_C_SetTermId) == 0x000008, "Wrong alignment on TimeLimitIcon_C_SetTermId");
static_assert(sizeof(TimeLimitIcon_C_SetTermId) == 0x000010, "Wrong size on TimeLimitIcon_C_SetTermId");
static_assert(offsetof(TimeLimitIcon_C_SetTermId, InEventTermId) == 0x000000, "Member 'TimeLimitIcon_C_SetTermId::InEventTermId' has a wrong offset!");

// Function TimeLimitIcon.TimeLimitIcon_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct TimeLimitIcon_C_SetText final
{
public:
	class FText                                   Param_Text;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(TimeLimitIcon_C_SetText) == 0x000008, "Wrong alignment on TimeLimitIcon_C_SetText");
static_assert(sizeof(TimeLimitIcon_C_SetText) == 0x000018, "Wrong size on TimeLimitIcon_C_SetText");
static_assert(offsetof(TimeLimitIcon_C_SetText, Param_Text) == 0x000000, "Member 'TimeLimitIcon_C_SetText::Param_Text' has a wrong offset!");

}

