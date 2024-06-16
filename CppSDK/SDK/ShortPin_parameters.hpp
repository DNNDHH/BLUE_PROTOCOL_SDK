#pragma once

 

// Package: ShortPin

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ShortPin.ShortPin_C.ExecuteUbergraph_ShortPin
// 0x0090 (0x0090 - 0x0000)
struct ShortPin_C_ExecuteUbergraph_ShortPin final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBShortPinType                               Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DBD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DBE[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4DBF[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Temp_object_Variable_1;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable_2;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default;                             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAkEventVariables                      K2Node_MakeStruct_AkEventVariables;                // 0x0048(0x0040)()
	int32                                         CallFunc_PostAkEventAtLocation_ReturnValue;        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsNew;                                // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortPin_C_ExecuteUbergraph_ShortPin) == 0x000008, "Wrong alignment on ShortPin_C_ExecuteUbergraph_ShortPin");
static_assert(sizeof(ShortPin_C_ExecuteUbergraph_ShortPin) == 0x000090, "Wrong size on ShortPin_C_ExecuteUbergraph_ShortPin");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, EntryPoint) == 0x000000, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, Temp_byte_Variable) == 0x000004, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, Temp_object_Variable) == 0x000008, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, CallFunc_MakeVector_ReturnValue) == 0x000010, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000020, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000028, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, Temp_object_Variable_1) == 0x000030, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, Temp_object_Variable_2) == 0x000038, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, K2Node_Select_Default) == 0x000040, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, K2Node_MakeStruct_AkEventVariables) == 0x000048, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::K2Node_MakeStruct_AkEventVariables' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, CallFunc_PostAkEventAtLocation_ReturnValue) == 0x000088, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::CallFunc_PostAkEventAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShortPin_C_ExecuteUbergraph_ShortPin, K2Node_Event_IsNew) == 0x00008C, "Member 'ShortPin_C_ExecuteUbergraph_ShortPin::K2Node_Event_IsNew' has a wrong offset!");

// Function ShortPin.ShortPin_C.UpdatePinInfo
// 0x0001 (0x0001 - 0x0000)
struct ShortPin_C_UpdatePinInfo final
{
public:
	bool                                          IsNew;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShortPin_C_UpdatePinInfo) == 0x000001, "Wrong alignment on ShortPin_C_UpdatePinInfo");
static_assert(sizeof(ShortPin_C_UpdatePinInfo) == 0x000001, "Wrong size on ShortPin_C_UpdatePinInfo");
static_assert(offsetof(ShortPin_C_UpdatePinInfo, IsNew) == 0x000000, "Member 'ShortPin_C_UpdatePinInfo::IsNew' has a wrong offset!");

}

