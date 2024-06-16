#pragma once

 

// Package: CommandMenu_BgAnim

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.ExecuteUbergraph_CommandMenu_BgAnim
// 0x0020 (0x0020 - 0x0000)
struct CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommandMenu_BgAnimParts1_C*            CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E72[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim) == 0x000008, "Wrong alignment on CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim");
static_assert(sizeof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim) == 0x000020, "Wrong size on CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim");
static_assert(offsetof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim, EntryPoint) == 0x000000, "Member 'CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim, Temp_int_Variable) == 0x000004, "Member 'CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim, CallFunc_Create_ReturnValue) == 0x000008, "Member 'CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim, CallFunc_AddChild_ReturnValue) == 0x000010, "Member 'CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'CommandMenu_BgAnim_C_ExecuteUbergraph_CommandMenu_BgAnim::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CommandMenu_BgAnim.CommandMenu_BgAnim_C.Set Bg Color
// 0x0028 (0x0028 - 0x0000)
struct CommandMenu_BgAnim_C_Set_Bg_Color final
{
public:
	ESBCommandMenuType                            MenuType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAnim;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E73[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_1; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommandMenu_BgAnim_C_Set_Bg_Color) == 0x000008, "Wrong alignment on CommandMenu_BgAnim_C_Set_Bg_Color");
static_assert(sizeof(CommandMenu_BgAnim_C_Set_Bg_Color) == 0x000028, "Wrong size on CommandMenu_BgAnim_C_Set_Bg_Color");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, MenuType) == 0x000000, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::MenuType' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, bAnim) == 0x000001, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::bAnim' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, CallFunc_K2_GetScalarParameterValue_ReturnValue) == 0x000020, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::CallFunc_K2_GetScalarParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommandMenu_BgAnim_C_Set_Bg_Color, CallFunc_K2_GetScalarParameterValue_ReturnValue_1) == 0x000024, "Member 'CommandMenu_BgAnim_C_Set_Bg_Color::CallFunc_K2_GetScalarParameterValue_ReturnValue_1' has a wrong offset!");

}

