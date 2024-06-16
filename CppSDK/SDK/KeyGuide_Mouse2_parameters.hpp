#pragma once

 

// Package: KeyGuide_Mouse2

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ExecuteUbergraph_KeyGuide_Mouse2
// 0x0260 (0x0260 - 0x0000)
struct KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B26[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerClassKeyConfigData            K2Node_CustomEvent_KeyConfigData;                  // 0x0008(0x01C8)(ConstParm)
	TArray<class UWidget*>                        CallFunc_KeyGuide_GetVerticalChildWidget_out;      // 0x01D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            CallFunc_KeyGuide_GetPareItems_outActionTextArray; // 0x01E0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<ESBKeyConfigAction>                    CallFunc_KeyGuide_GetPareItems_outActionConfigArray; // 0x01F0(0x0010)(ReferenceParm)
	TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> CallFunc_KeyGuide_MakePare_Return_Value;           // 0x0200(0x0050)(ContainsInstancedReference)
	TArray<class USBRuntimeTextBlock*>            CallFunc_Map_Keys_Keys;                            // 0x0250(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2");
static_assert(sizeof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2) == 0x000260, "Wrong size on KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2");
static_assert(offsetof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2, EntryPoint) == 0x000000, "Member 'KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2::EntryPoint' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2, K2Node_CustomEvent_KeyConfigData) == 0x000008, "Member 'KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2::K2Node_CustomEvent_KeyConfigData' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2, CallFunc_KeyGuide_GetVerticalChildWidget_out) == 0x0001D0, "Member 'KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2::CallFunc_KeyGuide_GetVerticalChildWidget_out' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2, CallFunc_KeyGuide_GetPareItems_outActionTextArray) == 0x0001E0, "Member 'KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2::CallFunc_KeyGuide_GetPareItems_outActionTextArray' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2, CallFunc_KeyGuide_GetPareItems_outActionConfigArray) == 0x0001F0, "Member 'KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2::CallFunc_KeyGuide_GetPareItems_outActionConfigArray' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2, CallFunc_KeyGuide_MakePare_Return_Value) == 0x000200, "Member 'KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2::CallFunc_KeyGuide_MakePare_Return_Value' has a wrong offset!");
static_assert(offsetof(KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2, CallFunc_Map_Keys_Keys) == 0x000250, "Member 'KeyGuide_Mouse2_C_ExecuteUbergraph_KeyGuide_Mouse2::CallFunc_Map_Keys_Keys' has a wrong offset!");

// Function KeyGuide_Mouse2.KeyGuide_Mouse2_C.ApplyKeyConfigData
// 0x01C8 (0x01C8 - 0x0000)
struct KeyGuide_Mouse2_C_ApplyKeyConfigData final
{
public:
	struct FSBPlayerClassKeyConfigData            KeyConfigData;                                     // 0x0000(0x01C8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(KeyGuide_Mouse2_C_ApplyKeyConfigData) == 0x000008, "Wrong alignment on KeyGuide_Mouse2_C_ApplyKeyConfigData");
static_assert(sizeof(KeyGuide_Mouse2_C_ApplyKeyConfigData) == 0x0001C8, "Wrong size on KeyGuide_Mouse2_C_ApplyKeyConfigData");
static_assert(offsetof(KeyGuide_Mouse2_C_ApplyKeyConfigData, KeyConfigData) == 0x000000, "Member 'KeyGuide_Mouse2_C_ApplyKeyConfigData::KeyConfigData' has a wrong offset!");

}

