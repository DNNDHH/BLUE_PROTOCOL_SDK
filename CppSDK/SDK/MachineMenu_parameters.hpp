#pragma once

 

// Package: MachineMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MachineMenu.MachineMenu_C.ExecuteUbergraph_MachineMenu
// 0x0180 (0x0180 - 0x0000)
struct MachineMenu_C_ExecuteUbergraph_MachineMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5256[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerCraft_C*                         CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsCrafted)>               K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UWeaponStackBBaseView_C*                CallFunc_Create_ReturnValue_1;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_IsCrafted_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5257[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_OnEvented;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5258[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0078(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00A0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x00C8(0x0028)()
	bool                                          K2Node_CustomEvent_IsCrafted;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5259[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_2;                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_3;                // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsCrafted)>               K2Node_CreateDelegate_OutputDelegate_3;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_525A[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x0120(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0148(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCraft_C*                         CallFunc_Create_ReturnValue_2;                     // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MachineMenu_C_ExecuteUbergraph_MachineMenu) == 0x000008, "Wrong alignment on MachineMenu_C_ExecuteUbergraph_MachineMenu");
static_assert(sizeof(MachineMenu_C_ExecuteUbergraph_MachineMenu) == 0x000180, "Wrong size on MachineMenu_C_ExecuteUbergraph_MachineMenu");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, EntryPoint) == 0x000000, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_Create_ReturnValue) == 0x000008, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_Create_ReturnValue_1) == 0x000020, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_CustomEvent_IsCrafted_1) == 0x000038, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_CustomEvent_IsCrafted_1' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_CustomEvent_OnEvented) == 0x00004C, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_CustomEvent_OnEvented' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_MakeStruct_SlateColor_1) == 0x000078, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_MakeStruct_SlateColor_2) == 0x0000A0, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_MakeStruct_SlateColor_3) == 0x0000C8, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_CustomEvent_IsCrafted) == 0x0000F0, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_CustomEvent_IsCrafted' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_PlaySE_ReturnValue) == 0x0000F4, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_PostAkEvent_ReturnValue) == 0x0000F8, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_PostAkEvent_ReturnValue_1) == 0x0000FC, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_PostAkEvent_ReturnValue_2) == 0x000100, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_PostAkEvent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_PostAkEvent_ReturnValue_3) == 0x000104, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_PostAkEvent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_PlaySE_ReturnValue_1) == 0x000108, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x00010C, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_MakeStruct_SlateColor_4) == 0x000120, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, K2Node_MakeStruct_SlateColor_5) == 0x000148, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_PlayAnimationForward_ReturnValue) == 0x000170, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(MachineMenu_C_ExecuteUbergraph_MachineMenu, CallFunc_Create_ReturnValue_2) == 0x000178, "Member 'MachineMenu_C_ExecuteUbergraph_MachineMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");

// Function MachineMenu.MachineMenu_C.OnCraftCloseAll
// 0x0001 (0x0001 - 0x0000)
struct MachineMenu_C_OnCraftCloseAll final
{
public:
	bool                                          IsCrafted;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MachineMenu_C_OnCraftCloseAll) == 0x000001, "Wrong alignment on MachineMenu_C_OnCraftCloseAll");
static_assert(sizeof(MachineMenu_C_OnCraftCloseAll) == 0x000001, "Wrong size on MachineMenu_C_OnCraftCloseAll");
static_assert(offsetof(MachineMenu_C_OnCraftCloseAll, IsCrafted) == 0x000000, "Member 'MachineMenu_C_OnCraftCloseAll::IsCrafted' has a wrong offset!");

// Function MachineMenu.MachineMenu_C.OnClosePanel
// 0x0001 (0x0001 - 0x0000)
struct MachineMenu_C_OnClosePanel final
{
public:
	bool                                          OnEvented;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MachineMenu_C_OnClosePanel) == 0x000001, "Wrong alignment on MachineMenu_C_OnClosePanel");
static_assert(sizeof(MachineMenu_C_OnClosePanel) == 0x000001, "Wrong size on MachineMenu_C_OnClosePanel");
static_assert(offsetof(MachineMenu_C_OnClosePanel, OnEvented) == 0x000000, "Member 'MachineMenu_C_OnClosePanel::OnEvented' has a wrong offset!");

// Function MachineMenu.MachineMenu_C.OnCraftClose
// 0x0001 (0x0001 - 0x0000)
struct MachineMenu_C_OnCraftClose final
{
public:
	bool                                          IsCrafted;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MachineMenu_C_OnCraftClose) == 0x000001, "Wrong alignment on MachineMenu_C_OnCraftClose");
static_assert(sizeof(MachineMenu_C_OnCraftClose) == 0x000001, "Wrong size on MachineMenu_C_OnCraftClose");
static_assert(offsetof(MachineMenu_C_OnCraftClose, IsCrafted) == 0x000000, "Member 'MachineMenu_C_OnCraftClose::IsCrafted' has a wrong offset!");

}

