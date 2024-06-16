#pragma once

 

// Package: SkillInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function SkillInfo.SkillInfo_C.ExecuteUbergraph_SkillInfo
// 0x00E8 (0x00E8 - 0x0000)
struct SkillInfo_C_ExecuteUbergraph_SkillInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPadKeySkinType                             K2Node_CustomEvent_SkinType;                       // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_723B[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBPadKeySkinType SkinType)>   K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsEdit;                        // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShow_1;                      // 0x003D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_723C[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAlwaysShowFieldHUD_ReturnValue;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bForward;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_In;                             // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_723D[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue_1;                // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_723E[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAlwaysShowFieldHUD_ReturnValue_1;       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsShow;                        // 0x0089(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerSkillPaletteSide                     K2Node_Event_PaletteSide;                          // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_Visible;                              // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_723F[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bIsShow)>                 K2Node_CreateDelegate_OutputDelegate_3;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class USBSkillInfoItemWidget*>         K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7240[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7241[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfo_C_ExecuteUbergraph_SkillInfo) == 0x000008, "Wrong alignment on SkillInfo_C_ExecuteUbergraph_SkillInfo");
static_assert(sizeof(SkillInfo_C_ExecuteUbergraph_SkillInfo) == 0x0000E8, "Wrong size on SkillInfo_C_ExecuteUbergraph_SkillInfo");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, EntryPoint) == 0x000000, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CustomEvent_SkinType) == 0x000004, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CustomEvent_SkinType' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, Temp_byte_Variable) == 0x000005, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, Temp_byte_Variable_1) == 0x000006, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000007, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000018, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, Temp_bool_Variable) == 0x000019, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CustomEvent_bIsEdit) == 0x00003C, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CustomEvent_bIsEdit' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CustomEvent_bIsShow_1) == 0x00003D, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CustomEvent_bIsShow_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetConfigSaveManager_IsValid) == 0x00003E, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000040, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetPlayerId_ReturnValue) == 0x000048, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_IsAlwaysShowFieldHUD_ReturnValue) == 0x000058, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_IsAlwaysShowFieldHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_Event_bForward) == 0x000059, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_Event_bForward' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, Temp_bool_Variable_1) == 0x00005A, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CustomEvent_In) == 0x00005B, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CustomEvent_In' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_Select_Default) == 0x00005C, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetPlayerId_ReturnValue_1) == 0x000068, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetPlayerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000078, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000080, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_IsAlwaysShowFieldHUD_ReturnValue_1) == 0x000088, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_IsAlwaysShowFieldHUD_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CustomEvent_bIsShow) == 0x000089, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CustomEvent_bIsShow' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_Event_PaletteSide) == 0x00008A, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_Event_PaletteSide' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_SwitchEnum_CmpSuccess) == 0x00008B, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_Event_Visible) == 0x00008C, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_Event_Visible' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_Select_Default_1) == 0x00008D, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_CreateDelegate_OutputDelegate_3) == 0x000090, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_MakeArray_Array) == 0x0000A0, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_PlayAnimationForward_ReturnValue) == 0x0000B0, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0000B8, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_PlayAnimationReverse_ReturnValue) == 0x0000C0, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, K2Node_Event_IsDesignTime) == 0x0000C8, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetPlayerManager_ReturnValue) == 0x0000D0, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetConfigSaveManager_IsValid_2) == 0x0000D8, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_ExecuteUbergraph_SkillInfo, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x0000E0, "Member 'SkillInfo_C_ExecuteUbergraph_SkillInfo::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.OnPadSkinChange
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_OnPadSkinChange final
{
public:
	ESBPadKeySkinType                             SkinType;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfo_C_OnPadSkinChange) == 0x000001, "Wrong alignment on SkillInfo_C_OnPadSkinChange");
static_assert(sizeof(SkillInfo_C_OnPadSkinChange) == 0x000001, "Wrong size on SkillInfo_C_OnPadSkinChange");
static_assert(offsetof(SkillInfo_C_OnPadSkinChange, SkinType) == 0x000000, "Member 'SkillInfo_C_OnPadSkinChange::SkinType' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfo_C_PreConstruct");
static_assert(sizeof(SkillInfo_C_PreConstruct) == 0x000001, "Wrong size on SkillInfo_C_PreConstruct");
static_assert(offsetof(SkillInfo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfo_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.OnChangeBackPaletteVisible
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_OnChangeBackPaletteVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_OnChangeBackPaletteVisible) == 0x000001, "Wrong alignment on SkillInfo_C_OnChangeBackPaletteVisible");
static_assert(sizeof(SkillInfo_C_OnChangeBackPaletteVisible) == 0x000001, "Wrong size on SkillInfo_C_OnChangeBackPaletteVisible");
static_assert(offsetof(SkillInfo_C_OnChangeBackPaletteVisible, Visible) == 0x000000, "Member 'SkillInfo_C_OnChangeBackPaletteVisible::Visible' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.OnChangePalette
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_OnChangePalette final
{
public:
	ESBPlayerSkillPaletteSide                     PaletteSide;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfo_C_OnChangePalette) == 0x000001, "Wrong alignment on SkillInfo_C_OnChangePalette");
static_assert(sizeof(SkillInfo_C_OnChangePalette) == 0x000001, "Wrong size on SkillInfo_C_OnChangePalette");
static_assert(offsetof(SkillInfo_C_OnChangePalette, PaletteSide) == 0x000000, "Member 'SkillInfo_C_OnChangePalette::PaletteSide' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_CustomEvent_0 final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_CustomEvent_0) == 0x000001, "Wrong alignment on SkillInfo_C_CustomEvent_0");
static_assert(sizeof(SkillInfo_C_CustomEvent_0) == 0x000001, "Wrong size on SkillInfo_C_CustomEvent_0");
static_assert(offsetof(SkillInfo_C_CustomEvent_0, bIsShow) == 0x000000, "Member 'SkillInfo_C_CustomEvent_0::bIsShow' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.AnimationInOut
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_AnimationInOut final
{
public:
	bool                                          In;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_AnimationInOut) == 0x000001, "Wrong alignment on SkillInfo_C_AnimationInOut");
static_assert(sizeof(SkillInfo_C_AnimationInOut) == 0x000001, "Wrong size on SkillInfo_C_AnimationInOut");
static_assert(offsetof(SkillInfo_C_AnimationInOut, In) == 0x000000, "Member 'SkillInfo_C_AnimationInOut::In' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.OnInAnimation
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_OnInAnimation final
{
public:
	bool                                          bForward;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_OnInAnimation) == 0x000001, "Wrong alignment on SkillInfo_C_OnInAnimation");
static_assert(sizeof(SkillInfo_C_OnInAnimation) == 0x000001, "Wrong size on SkillInfo_C_OnInAnimation");
static_assert(offsetof(SkillInfo_C_OnInAnimation, bForward) == 0x000000, "Member 'SkillInfo_C_OnInAnimation::bForward' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.OnChangeShowAlwaysHUD_event
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_OnChangeShowAlwaysHUD_event final
{
public:
	bool                                          bIsShow;                                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong alignment on SkillInfo_C_OnChangeShowAlwaysHUD_event");
static_assert(sizeof(SkillInfo_C_OnChangeShowAlwaysHUD_event) == 0x000001, "Wrong size on SkillInfo_C_OnChangeShowAlwaysHUD_event");
static_assert(offsetof(SkillInfo_C_OnChangeShowAlwaysHUD_event, bIsShow) == 0x000000, "Member 'SkillInfo_C_OnChangeShowAlwaysHUD_event::bIsShow' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct SkillInfo_C_SetEditMode final
{
public:
	bool                                          bIsEdit;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_SetEditMode) == 0x000001, "Wrong alignment on SkillInfo_C_SetEditMode");
static_assert(sizeof(SkillInfo_C_SetEditMode) == 0x000001, "Wrong size on SkillInfo_C_SetEditMode");
static_assert(offsetof(SkillInfo_C_SetEditMode, bIsEdit) == 0x000000, "Member 'SkillInfo_C_SetEditMode::bIsEdit' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.GetVisibility_0
// 0x0002 (0x0002 - 0x0000)
struct SkillInfo_C_GetVisibility_0 final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBattleCurrentMapLevel_ReturnValue;     // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_GetVisibility_0) == 0x000001, "Wrong alignment on SkillInfo_C_GetVisibility_0");
static_assert(sizeof(SkillInfo_C_GetVisibility_0) == 0x000002, "Wrong size on SkillInfo_C_GetVisibility_0");
static_assert(offsetof(SkillInfo_C_GetVisibility_0, ReturnValue) == 0x000000, "Member 'SkillInfo_C_GetVisibility_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_GetVisibility_0, CallFunc_CanBattleCurrentMapLevel_ReturnValue) == 0x000001, "Member 'SkillInfo_C_GetVisibility_0::CallFunc_CanBattleCurrentMapLevel_ReturnValue' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.IsPlayAnimation
// 0x0002 (0x0002 - 0x0000)
struct SkillInfo_C_IsPlayAnimation final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfo_C_IsPlayAnimation) == 0x000001, "Wrong alignment on SkillInfo_C_IsPlayAnimation");
static_assert(sizeof(SkillInfo_C_IsPlayAnimation) == 0x000002, "Wrong size on SkillInfo_C_IsPlayAnimation");
static_assert(offsetof(SkillInfo_C_IsPlayAnimation, ReturnValue) == 0x000000, "Member 'SkillInfo_C_IsPlayAnimation::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_IsPlayAnimation, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000001, "Member 'SkillInfo_C_IsPlayAnimation::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function SkillInfo.SkillInfo_C.UpdateChangeText
// 0x0090 (0x0090 - 0x0000)
struct SkillInfo_C_UpdateChangeText final
{
public:
	class FString                                 CallFunc_GetDisplayShortTextByAction_ReturnValue;  // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
};
static_assert(alignof(SkillInfo_C_UpdateChangeText) == 0x000008, "Wrong alignment on SkillInfo_C_UpdateChangeText");
static_assert(sizeof(SkillInfo_C_UpdateChangeText) == 0x000090, "Wrong size on SkillInfo_C_UpdateChangeText");
static_assert(offsetof(SkillInfo_C_UpdateChangeText, CallFunc_GetDisplayShortTextByAction_ReturnValue) == 0x000000, "Member 'SkillInfo_C_UpdateChangeText::CallFunc_GetDisplayShortTextByAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_UpdateChangeText, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'SkillInfo_C_UpdateChangeText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_UpdateChangeText, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'SkillInfo_C_UpdateChangeText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_UpdateChangeText, K2Node_MakeArray_Array) == 0x000068, "Member 'SkillInfo_C_UpdateChangeText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillInfo_C_UpdateChangeText, CallFunc_Format_ReturnValue) == 0x000078, "Member 'SkillInfo_C_UpdateChangeText::CallFunc_Format_ReturnValue' has a wrong offset!");

}

