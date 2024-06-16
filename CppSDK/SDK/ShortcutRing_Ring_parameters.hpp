#pragma once

 

// Package: ShortcutRing_Ring

#include "Basic.hpp"


namespace SDK::Params
{

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.OnInOutFinished__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature final
{
public:
	float                                         AnimationCurrentTime;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature) == 0x000004, "Wrong alignment on ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature) == 0x000004, "Wrong size on ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature, AnimationCurrentTime) == 0x000000, "Member 'ShortcutRing_Ring_C_OnInOutFinished__DelegateSignature::AnimationCurrentTime' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct ShortcutRing_Ring_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on ShortcutRing_Ring_C_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on ShortcutRing_Ring_C_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_OnClick__DelegateSignature, Param_Index) == 0x000000, "Member 'ShortcutRing_Ring_C_OnClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.OnClickRight__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct ShortcutRing_Ring_C_OnClickRight__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_OnClickRight__DelegateSignature) == 0x000004, "Wrong alignment on ShortcutRing_Ring_C_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_OnClickRight__DelegateSignature) == 0x000004, "Wrong size on ShortcutRing_Ring_C_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_OnClickRight__DelegateSignature, Param_Index) == 0x000000, "Member 'ShortcutRing_Ring_C_OnClickRight__DelegateSignature::Param_Index' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.ExecuteUbergraph_ShortcutRing_Ring
// 0x0118 (0x0118 - 0x0000)
struct ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_15;                // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_14;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_1;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DD9[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_13;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_2;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDA[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_12;                // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_3;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDB[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_11;                // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_4;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDC[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_10;                // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_5;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDD[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_9;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_6;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDE[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_8;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_7;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DDF[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_7;                 // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_8;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE0[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_6;                 // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_9;               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE1[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_5;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_10;              // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE2[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_4;                 // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_11;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE3[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_3;                 // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_12;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE4[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_2;                 // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_13;              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE5[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon_1;                 // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_14;              // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DE6[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShortcutringIcon_C*                    K2Node_ComponentBoundEvent_Icon;                   // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIconIndex_ReturnValue_15;              // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4DE7[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring");
static_assert(sizeof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring) == 0x000118, "Wrong size on ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, EntryPoint) == 0x000000, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_15) == 0x000008, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue) == 0x000018, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_14) == 0x000020, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_1) == 0x000028, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_13) == 0x000030, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_2) == 0x000038, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_12) == 0x000040, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_3) == 0x000048, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_11) == 0x000050, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_4) == 0x000058, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_10) == 0x000060, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_5) == 0x000068, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_9) == 0x000070, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_6) == 0x000078, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_8) == 0x000080, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_7) == 0x000088, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_7) == 0x000090, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_7' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_8) == 0x000098, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_6) == 0x0000A0, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_6' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_9) == 0x0000A8, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_5) == 0x0000B0, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_5' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_10) == 0x0000B8, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_4) == 0x0000C0, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_4' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_11) == 0x0000C8, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_3) == 0x0000D0, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_3' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_12) == 0x0000D8, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_2) == 0x0000E0, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_2' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_13) == 0x0000E8, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon_1) == 0x0000F0, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon_1' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_14) == 0x0000F8, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_ComponentBoundEvent_Icon) == 0x000100, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_ComponentBoundEvent_Icon' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetIconIndex_ReturnValue_15) == 0x000108, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetIconIndex_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, K2Node_Event_IsDesignTime) == 0x00010C, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000110, "Member 'ShortcutRing_Ring_C_ExecuteUbergraph_ShortcutRing_Ring::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ShortcutRing_Ring_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortcutRing_Ring_C_PreConstruct) == 0x000001, "Wrong alignment on ShortcutRing_Ring_C_PreConstruct");
static_assert(sizeof(ShortcutRing_Ring_C_PreConstruct) == 0x000001, "Wrong size on ShortcutRing_Ring_C_PreConstruct");
static_assert(offsetof(ShortcutRing_Ring_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShortcutRing_Ring_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class UShortcutringIcon_C*                    Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Icon) == 0x000000, "Member 'ShortcutRing_Ring_C_BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Icon' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_PlayAnimIn) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_PlayAnimIn");
static_assert(sizeof(ShortcutRing_Ring_C_PlayAnimIn) == 0x000008, "Wrong size on ShortcutRing_Ring_C_PlayAnimIn");
static_assert(offsetof(ShortcutRing_Ring_C_PlayAnimIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'ShortcutRing_Ring_C_PlayAnimIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function ShortcutRing_Ring.ShortcutRing_Ring_C.PlayAnimOut
// 0x0008 (0x0008 - 0x0000)
struct ShortcutRing_Ring_C_PlayAnimOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShortcutRing_Ring_C_PlayAnimOut) == 0x000008, "Wrong alignment on ShortcutRing_Ring_C_PlayAnimOut");
static_assert(sizeof(ShortcutRing_Ring_C_PlayAnimOut) == 0x000008, "Wrong size on ShortcutRing_Ring_C_PlayAnimOut");
static_assert(offsetof(ShortcutRing_Ring_C_PlayAnimOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'ShortcutRing_Ring_C_PlayAnimOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}

