#pragma once

 

// Package: ImagineStackBMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function ImagineStackBMenu.ImagineStackBMenu_C.ExecuteUbergraph_ImagineStackBMenu
// 0x0068 (0x0068 - 0x0000)
struct ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidMountStackB_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A16[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMountStackBBaseView_C*                 CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A17[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidMountStackB_ReturnValue_1;           // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A18[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UImagineStackBBaseView_C*               CallFunc_Create_ReturnValue_1;                     // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A19[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7A1A[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu) == 0x000008, "Wrong alignment on ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu");
static_assert(sizeof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu) == 0x000068, "Wrong size on ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, EntryPoint) == 0x000000, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_ValidMountStackB_ReturnValue) == 0x000004, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_ValidMountStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_Create_ReturnValue) == 0x000008, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_ValidMountStackB_ReturnValue_1) == 0x000025, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_ValidMountStackB_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_Create_ReturnValue_1) == 0x000038, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_IsValid_ReturnValue_2) == 0x000040, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_IsValid_ReturnValue_3) == 0x000041, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_IsValid_ReturnValue_4) == 0x000042, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_PlayAnimationForward_ReturnValue) == 0x000058, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu, CallFunc_PlaySE_ReturnValue) == 0x000060, "Member 'ImagineStackBMenu_C_ExecuteUbergraph_ImagineStackBMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");

}

