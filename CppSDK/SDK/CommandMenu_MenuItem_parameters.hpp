#pragma once

 

// Package: CommandMenu_MenuItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CommandMenu_MenuItem_C_OnSelect__DelegateSignature final
{
public:
	class UCommandMenu_MenuItem_C*                Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on CommandMenu_MenuItem_C_OnSelect__DelegateSignature");
static_assert(sizeof(CommandMenu_MenuItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong size on CommandMenu_MenuItem_C_OnSelect__DelegateSignature");
static_assert(offsetof(CommandMenu_MenuItem_C_OnSelect__DelegateSignature, Button) == 0x000000, "Member 'CommandMenu_MenuItem_C_OnSelect__DelegateSignature::Button' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ExecuteUbergraph_CommandMenu_MenuItem
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShow;                        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E5C[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem) == 0x000008, "Wrong alignment on CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem");
static_assert(sizeof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem) == 0x000020, "Wrong size on CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, EntryPoint) == 0x000000, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, Temp_byte_Variable) == 0x000004, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, K2Node_Event_IsDesignTime) == 0x000005, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, K2Node_CustomEvent_bIsShow) == 0x000006, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::K2Node_CustomEvent_bIsShow' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, Temp_byte_Variable_1) == 0x000018, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000019, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, Temp_bool_Variable) == 0x00001A, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x00001B, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem, K2Node_Select_Default) == 0x00001C, "Member 'CommandMenu_MenuItem_C_ExecuteUbergraph_CommandMenu_MenuItem::K2Node_Select_Default' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.ShowExcramation
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem_C_ShowExcramation final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_MenuItem_C_ShowExcramation) == 0x000001, "Wrong alignment on CommandMenu_MenuItem_C_ShowExcramation");
static_assert(sizeof(CommandMenu_MenuItem_C_ShowExcramation) == 0x000001, "Wrong size on CommandMenu_MenuItem_C_ShowExcramation");
static_assert(offsetof(CommandMenu_MenuItem_C_ShowExcramation, bIsShow) == 0x000000, "Member 'CommandMenu_MenuItem_C_ShowExcramation::bIsShow' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_MenuItem_C_PreConstruct) == 0x000001, "Wrong alignment on CommandMenu_MenuItem_C_PreConstruct");
static_assert(sizeof(CommandMenu_MenuItem_C_PreConstruct) == 0x000001, "Wrong size on CommandMenu_MenuItem_C_PreConstruct");
static_assert(offsetof(CommandMenu_MenuItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommandMenu_MenuItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.Play Btn Anim
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_MenuItem_C_Play_Btn_Anim final
{
public:
	bool                                          Param_bActive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E5D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E5E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem_C_Play_Btn_Anim) == 0x000008, "Wrong alignment on CommandMenu_MenuItem_C_Play_Btn_Anim");
static_assert(sizeof(CommandMenu_MenuItem_C_Play_Btn_Anim) == 0x000020, "Wrong size on CommandMenu_MenuItem_C_Play_Btn_Anim");
static_assert(offsetof(CommandMenu_MenuItem_C_Play_Btn_Anim, Param_bActive) == 0x000000, "Member 'CommandMenu_MenuItem_C_Play_Btn_Anim::Param_bActive' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_Play_Btn_Anim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'CommandMenu_MenuItem_C_Play_Btn_Anim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_Play_Btn_Anim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CommandMenu_MenuItem_C_Play_Btn_Anim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_Play_Btn_Anim, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000010, "Member 'CommandMenu_MenuItem_C_Play_Btn_Anim::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_Play_Btn_Anim, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'CommandMenu_MenuItem_C_Play_Btn_Anim::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.GetMenuType
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem_C_GetMenuType final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_MenuItem_C_GetMenuType) == 0x000001, "Wrong alignment on CommandMenu_MenuItem_C_GetMenuType");
static_assert(sizeof(CommandMenu_MenuItem_C_GetMenuType) == 0x000001, "Wrong size on CommandMenu_MenuItem_C_GetMenuType");
static_assert(offsetof(CommandMenu_MenuItem_C_GetMenuType, MenuType) == 0x000000, "Member 'CommandMenu_MenuItem_C_GetMenuType::MenuType' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtnTextColor
// 0x0058 (0x0058 - 0x0000)
struct CommandMenu_MenuItem_C_SetBtnTextColor final
{
public:
	bool                                          Param_bActive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E5F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(CommandMenu_MenuItem_C_SetBtnTextColor) == 0x000008, "Wrong alignment on CommandMenu_MenuItem_C_SetBtnTextColor");
static_assert(sizeof(CommandMenu_MenuItem_C_SetBtnTextColor) == 0x000058, "Wrong size on CommandMenu_MenuItem_C_SetBtnTextColor");
static_assert(offsetof(CommandMenu_MenuItem_C_SetBtnTextColor, Param_bActive) == 0x000000, "Member 'CommandMenu_MenuItem_C_SetBtnTextColor::Param_bActive' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_SetBtnTextColor, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CommandMenu_MenuItem_C_SetBtnTextColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_SetBtnTextColor, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CommandMenu_MenuItem_C_SetBtnTextColor::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.SetBtn
// 0x0001 (0x0001 - 0x0000)
struct CommandMenu_MenuItem_C_SetBtn final
{
public:
	bool                                          Param_bActive;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_MenuItem_C_SetBtn) == 0x000001, "Wrong alignment on CommandMenu_MenuItem_C_SetBtn");
static_assert(sizeof(CommandMenu_MenuItem_C_SetBtn) == 0x000001, "Wrong size on CommandMenu_MenuItem_C_SetBtn");
static_assert(offsetof(CommandMenu_MenuItem_C_SetBtn, Param_bActive) == 0x000000, "Member 'CommandMenu_MenuItem_C_SetBtn::Param_bActive' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.IsActiveExcramation
// 0x0003 (0x0003 - 0x0000)
struct CommandMenu_MenuItem_C_IsActiveExcramation final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_MenuItem_C_IsActiveExcramation) == 0x000001, "Wrong alignment on CommandMenu_MenuItem_C_IsActiveExcramation");
static_assert(sizeof(CommandMenu_MenuItem_C_IsActiveExcramation) == 0x000003, "Wrong size on CommandMenu_MenuItem_C_IsActiveExcramation");
static_assert(offsetof(CommandMenu_MenuItem_C_IsActiveExcramation, Active) == 0x000000, "Member 'CommandMenu_MenuItem_C_IsActiveExcramation::Active' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_IsActiveExcramation, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'CommandMenu_MenuItem_C_IsActiveExcramation::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_IsActiveExcramation, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'CommandMenu_MenuItem_C_IsActiveExcramation::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function CommandMenu_MenuItem.CommandMenu_MenuItem_C.UpdateMailRestrictions
// 0x0028 (0x0028 - 0x0000)
struct CommandMenu_MenuItem_C_UpdateMailRestrictions final
{
public:
	bool                                          Aleat;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Warning;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E60[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerMailComponent*                 MailComp;                                          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E61[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommandMenu_MenuItem_C_UpdateMailRestrictions) == 0x000008, "Wrong alignment on CommandMenu_MenuItem_C_UpdateMailRestrictions");
static_assert(sizeof(CommandMenu_MenuItem_C_UpdateMailRestrictions) == 0x000028, "Wrong size on CommandMenu_MenuItem_C_UpdateMailRestrictions");
static_assert(offsetof(CommandMenu_MenuItem_C_UpdateMailRestrictions, Aleat) == 0x000000, "Member 'CommandMenu_MenuItem_C_UpdateMailRestrictions::Aleat' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_UpdateMailRestrictions, Warning) == 0x000001, "Member 'CommandMenu_MenuItem_C_UpdateMailRestrictions::Warning' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_UpdateMailRestrictions, MailComp) == 0x000008, "Member 'CommandMenu_MenuItem_C_UpdateMailRestrictions::MailComp' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_UpdateMailRestrictions, Temp_bool_Variable) == 0x000010, "Member 'CommandMenu_MenuItem_C_UpdateMailRestrictions::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_UpdateMailRestrictions, CallFunc_BooleanOR_ReturnValue) == 0x000011, "Member 'CommandMenu_MenuItem_C_UpdateMailRestrictions::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_UpdateMailRestrictions, K2Node_Select_Default) == 0x000018, "Member 'CommandMenu_MenuItem_C_UpdateMailRestrictions::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CommandMenu_MenuItem_C_UpdateMailRestrictions, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000020, "Member 'CommandMenu_MenuItem_C_UpdateMailRestrictions::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

