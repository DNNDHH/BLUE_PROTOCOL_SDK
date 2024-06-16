#pragma once

 

// Package: ElementGauge

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ElementGauge.ElementGauge_C.ExecuteUbergraph_ElementGauge
// 0x0040 (0x0040 - 0x0000)
struct ElementGauge_C_ExecuteUbergraph_ElementGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  K2Node_CustomEvent_ElementType;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D54[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBAttribute ElementType)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBAttribute ElementType)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class ASBCharacter*                           K2Node_Event_InCharacter_1;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_Event_InCharacter;                          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBAttribute                                  K2Node_CustomEvent_ElementType_1;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElementGauge_C_ExecuteUbergraph_ElementGauge) == 0x000008, "Wrong alignment on ElementGauge_C_ExecuteUbergraph_ElementGauge");
static_assert(sizeof(ElementGauge_C_ExecuteUbergraph_ElementGauge) == 0x000040, "Wrong size on ElementGauge_C_ExecuteUbergraph_ElementGauge");
static_assert(offsetof(ElementGauge_C_ExecuteUbergraph_ElementGauge, EntryPoint) == 0x000000, "Member 'ElementGauge_C_ExecuteUbergraph_ElementGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(ElementGauge_C_ExecuteUbergraph_ElementGauge, K2Node_CustomEvent_ElementType) == 0x000004, "Member 'ElementGauge_C_ExecuteUbergraph_ElementGauge::K2Node_CustomEvent_ElementType' has a wrong offset!");
static_assert(offsetof(ElementGauge_C_ExecuteUbergraph_ElementGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ElementGauge_C_ExecuteUbergraph_ElementGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ElementGauge_C_ExecuteUbergraph_ElementGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'ElementGauge_C_ExecuteUbergraph_ElementGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ElementGauge_C_ExecuteUbergraph_ElementGauge, K2Node_Event_InCharacter_1) == 0x000028, "Member 'ElementGauge_C_ExecuteUbergraph_ElementGauge::K2Node_Event_InCharacter_1' has a wrong offset!");
static_assert(offsetof(ElementGauge_C_ExecuteUbergraph_ElementGauge, K2Node_Event_InCharacter) == 0x000030, "Member 'ElementGauge_C_ExecuteUbergraph_ElementGauge::K2Node_Event_InCharacter' has a wrong offset!");
static_assert(offsetof(ElementGauge_C_ExecuteUbergraph_ElementGauge, K2Node_CustomEvent_ElementType_1) == 0x000038, "Member 'ElementGauge_C_ExecuteUbergraph_ElementGauge::K2Node_CustomEvent_ElementType_1' has a wrong offset!");

// Function ElementGauge.ElementGauge_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct ElementGauge_C_CustomEvent_1 final
{
public:
	ESBAttribute                                  ElementType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElementGauge_C_CustomEvent_1) == 0x000001, "Wrong alignment on ElementGauge_C_CustomEvent_1");
static_assert(sizeof(ElementGauge_C_CustomEvent_1) == 0x000001, "Wrong size on ElementGauge_C_CustomEvent_1");
static_assert(offsetof(ElementGauge_C_CustomEvent_1, ElementType) == 0x000000, "Member 'ElementGauge_C_CustomEvent_1::ElementType' has a wrong offset!");

// Function ElementGauge.ElementGauge_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct ElementGauge_C_CustomEvent_0 final
{
public:
	ESBAttribute                                  ElementType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElementGauge_C_CustomEvent_0) == 0x000001, "Wrong alignment on ElementGauge_C_CustomEvent_0");
static_assert(sizeof(ElementGauge_C_CustomEvent_0) == 0x000001, "Wrong size on ElementGauge_C_CustomEvent_0");
static_assert(offsetof(ElementGauge_C_CustomEvent_0, ElementType) == 0x000000, "Member 'ElementGauge_C_CustomEvent_0::ElementType' has a wrong offset!");

// Function ElementGauge.ElementGauge_C.OnUnbind
// 0x0008 (0x0008 - 0x0000)
struct ElementGauge_C_OnUnbind final
{
public:
	class ASBCharacter*                           InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElementGauge_C_OnUnbind) == 0x000008, "Wrong alignment on ElementGauge_C_OnUnbind");
static_assert(sizeof(ElementGauge_C_OnUnbind) == 0x000008, "Wrong size on ElementGauge_C_OnUnbind");
static_assert(offsetof(ElementGauge_C_OnUnbind, InCharacter) == 0x000000, "Member 'ElementGauge_C_OnUnbind::InCharacter' has a wrong offset!");

// Function ElementGauge.ElementGauge_C.OnBind
// 0x0008 (0x0008 - 0x0000)
struct ElementGauge_C_OnBind final
{
public:
	class ASBCharacter*                           InCharacter;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElementGauge_C_OnBind) == 0x000008, "Wrong alignment on ElementGauge_C_OnBind");
static_assert(sizeof(ElementGauge_C_OnBind) == 0x000008, "Wrong size on ElementGauge_C_OnBind");
static_assert(offsetof(ElementGauge_C_OnBind, InCharacter) == 0x000000, "Member 'ElementGauge_C_OnBind::InCharacter' has a wrong offset!");

}

