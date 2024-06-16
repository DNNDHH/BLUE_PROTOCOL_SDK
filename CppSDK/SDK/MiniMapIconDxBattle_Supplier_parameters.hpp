#pragma once

 

// Package: MiniMapIconDxBattle_Supplier

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.ExecuteUbergraph_MiniMapIconDxBattle_Supplier
// 0x0040 (0x0040 - 0x0000)
struct MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_687C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_687D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_687E[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBDestructible*                        K2Node_DynamicCast_AsSBDestructible;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier) == 0x000008, "Wrong alignment on MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier");
static_assert(sizeof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier) == 0x000040, "Wrong size on MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, EntryPoint) == 0x000000, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, Temp_bool_Variable) == 0x000004, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, Temp_byte_Variable) == 0x000018, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, Temp_byte_Variable_1) == 0x000028, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, K2Node_DynamicCast_AsSBDestructible) == 0x000030, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::K2Node_DynamicCast_AsSBDestructible' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000039, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier, K2Node_Select_Default) == 0x00003A, "Member 'MiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier::K2Node_Select_Default' has a wrong offset!");

}

