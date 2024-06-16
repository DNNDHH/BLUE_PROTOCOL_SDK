#pragma once

 

// Package: LightScheduleComponent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LightScheduleComponent.LightScheduleComponent_C.ExecuteUbergraph_LightScheduleComponent
// 0x0158 (0x0158 - 0x0000)
struct LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9918[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9919[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue_1;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_991A[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_991B[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_991C[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_991D[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBGameState*                           K2Node_DynamicCast_AsSBGame_State;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_991E[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMinutesPerDay_ReturnValue;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_991F[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9920[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLightMaterialSchedule               CallFunc_Array_Get_Item;                           // 0x0070(0x0018)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9921[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9922[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_SetGameTime;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9923[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x00A0(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddIntGameTime_ReturnValue;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9924[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULightComponent*>                CallFunc_Map_Keys_Keys;                            // 0x00C8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ULightComponent*                        CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9925[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Map_Find_Value;                           // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9926[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x00F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9927[0x1];                                     // 0x00F7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_3;         // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9928[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNowHourMinInteger_ReturnValue;         // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNowHourMinInteger_ReturnValue_1;       // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CheckTimeFadeStatus_OutLastTime;          // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CheckTimeFadeStatus_OutFadeRate;          // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckTimeFadeStatus_ReturnValue;          // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9929[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CheckTimeFadeStatus_OutLastTime_1;        // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CheckTimeFadeStatus_OutFadeRate_1;        // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckTimeFadeStatus_ReturnValue_1;        // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent) == 0x000008, "Wrong alignment on LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent");
static_assert(sizeof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent) == 0x000158, "Wrong size on LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, EntryPoint) == 0x000000, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_UtcNow_ReturnValue) == 0x000010, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_UtcNow_ReturnValue_1) == 0x000018, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_UtcNow_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000028, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_GetTotalSeconds_ReturnValue) == 0x000034, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_GetGameState_ReturnValue) == 0x000040, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, Temp_int_Loop_Counter_Variable_1) == 0x000048, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, K2Node_DynamicCast_AsSBGame_State) == 0x000050, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::K2Node_DynamicCast_AsSBGame_State' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_GetMinutesPerDay_ReturnValue) == 0x000060, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_GetMinutesPerDay_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000064, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, Temp_int_Array_Index_Variable) == 0x000068, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Array_Get_Item) == 0x000070, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_IsValid_ReturnValue_1) == 0x000088, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00008C, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_FClamp_ReturnValue) == 0x000090, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Less_FloatFloat_ReturnValue) == 0x000094, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, K2Node_CustomEvent_SetGameTime) == 0x000098, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::K2Node_CustomEvent_SetGameTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000A0, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_AddIntGameTime_ReturnValue) == 0x0000B8, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_AddIntGameTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Array_Length_ReturnValue_1) == 0x0000BC, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C0, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000C1, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, Temp_int_Array_Index_Variable_1) == 0x0000C4, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Map_Keys_Keys) == 0x0000C8, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Array_Length_ReturnValue_2) == 0x0000E0, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_IsValid_ReturnValue_2) == 0x0000E4, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E5, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Map_Find_Value) == 0x0000E8, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Map_Find_ReturnValue) == 0x0000EC, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_MakeLiteralFloat_ReturnValue) == 0x0000F0, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000F4, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x0000F5, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Greater_FloatFloat_ReturnValue_2) == 0x0000F6, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Greater_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_SelectFloat_ReturnValue) == 0x0000F8, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000FC, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_SelectFloat_ReturnValue_1) == 0x000100, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000104, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000108, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Lerp_ReturnValue) == 0x00010C, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_SelectFloat_ReturnValue_2) == 0x000110, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000114, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_FMax_ReturnValue) == 0x000118, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Multiply_IntFloat_ReturnValue) == 0x00011C, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_MakeVector_ReturnValue) == 0x000120, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00012C, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000130, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_Greater_FloatFloat_ReturnValue_3) == 0x000134, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_Greater_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_GetNowHourMinInteger_ReturnValue) == 0x000138, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_GetNowHourMinInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_GetNowHourMinInteger_ReturnValue_1) == 0x00013C, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_GetNowHourMinInteger_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_CheckTimeFadeStatus_OutLastTime) == 0x000140, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_CheckTimeFadeStatus_OutLastTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_CheckTimeFadeStatus_OutFadeRate) == 0x000144, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_CheckTimeFadeStatus_OutFadeRate' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_CheckTimeFadeStatus_ReturnValue) == 0x000148, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_CheckTimeFadeStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_CheckTimeFadeStatus_OutLastTime_1) == 0x00014C, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_CheckTimeFadeStatus_OutLastTime_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_CheckTimeFadeStatus_OutFadeRate_1) == 0x000150, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_CheckTimeFadeStatus_OutFadeRate_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_CheckTimeFadeStatus_ReturnValue_1) == 0x000154, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_CheckTimeFadeStatus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000155, "Member 'LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function LightScheduleComponent.LightScheduleComponent_C.StartTimeSchedule
// 0x0004 (0x0004 - 0x0000)
struct LightScheduleComponent_C_StartTimeSchedule final
{
public:
	int32                                         SetGameTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightScheduleComponent_C_StartTimeSchedule) == 0x000004, "Wrong alignment on LightScheduleComponent_C_StartTimeSchedule");
static_assert(sizeof(LightScheduleComponent_C_StartTimeSchedule) == 0x000004, "Wrong size on LightScheduleComponent_C_StartTimeSchedule");
static_assert(offsetof(LightScheduleComponent_C_StartTimeSchedule, SetGameTime) == 0x000000, "Member 'LightScheduleComponent_C_StartTimeSchedule::SetGameTime' has a wrong offset!");

// Function LightScheduleComponent.LightScheduleComponent_C.CheckTime
// 0x0078 (0x0078 - 0x0000)
struct LightScheduleComponent_C_CheckTime final
{
public:
	TArray<int32>                                 Array;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         PrevTime;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_CurrTime;                                    // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckedTime;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChkEndTime;                                        // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ChkStartTime;                                      // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempTime;                                          // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_992A[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_992B[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_992C[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_992D[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_992E[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LightScheduleComponent_C_CheckTime) == 0x000008, "Wrong alignment on LightScheduleComponent_C_CheckTime");
static_assert(sizeof(LightScheduleComponent_C_CheckTime) == 0x000078, "Wrong size on LightScheduleComponent_C_CheckTime");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, Array) == 0x000000, "Member 'LightScheduleComponent_C_CheckTime::Array' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, PrevTime) == 0x000010, "Member 'LightScheduleComponent_C_CheckTime::PrevTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, Param_CurrTime) == 0x000014, "Member 'LightScheduleComponent_C_CheckTime::Param_CurrTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CheckedTime) == 0x000018, "Member 'LightScheduleComponent_C_CheckTime::CheckedTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, ChkEndTime) == 0x00001C, "Member 'LightScheduleComponent_C_CheckTime::ChkEndTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, ChkStartTime) == 0x000020, "Member 'LightScheduleComponent_C_CheckTime::ChkStartTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, TempTime) == 0x000024, "Member 'LightScheduleComponent_C_CheckTime::TempTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, Temp_int_Array_Index_Variable) == 0x000030, "Member 'LightScheduleComponent_C_CheckTime::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Array_Get_Item) == 0x000034, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_BooleanAND_ReturnValue) == 0x00003A, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00003B, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'LightScheduleComponent_C_CheckTime::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Less_IntInt_ReturnValue_1) == 0x000040, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, Temp_int_Loop_Counter_Variable_1) == 0x000048, "Member 'LightScheduleComponent_C_CheckTime::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'LightScheduleComponent_C_CheckTime::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Less_IntInt_ReturnValue_2) == 0x000050, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Array_Get_Item_1) == 0x000054, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000058, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Less_IntInt_ReturnValue_3) == 0x000059, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_SelectInt_ReturnValue) == 0x00005C, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_BooleanOR_ReturnValue) == 0x000060, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Less_IntInt_ReturnValue_4) == 0x000068, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Add_IntInt_ReturnValue_2) == 0x00006C, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_CheckTime, CallFunc_Less_IntInt_ReturnValue_5) == 0x000070, "Member 'LightScheduleComponent_C_CheckTime::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");

// Function LightScheduleComponent.LightScheduleComponent_C.SetVariableLight
// 0x0008 (0x0008 - 0x0000)
struct LightScheduleComponent_C_SetVariableLight final
{
public:
	class ULightComponent*                        LightComponent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightScheduleComponent_C_SetVariableLight) == 0x000008, "Wrong alignment on LightScheduleComponent_C_SetVariableLight");
static_assert(sizeof(LightScheduleComponent_C_SetVariableLight) == 0x000008, "Wrong size on LightScheduleComponent_C_SetVariableLight");
static_assert(offsetof(LightScheduleComponent_C_SetVariableLight, LightComponent) == 0x000000, "Member 'LightScheduleComponent_C_SetVariableLight::LightComponent' has a wrong offset!");

// Function LightScheduleComponent.LightScheduleComponent_C.SetVariableMaterial
// 0x0038 (0x0038 - 0x0000)
struct LightScheduleComponent_C_SetVariableMaterial final
{
public:
	class UMaterialInstanceDynamic*               MaterialInstance;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ParameterName;                                     // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intencity;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ArrayIndex;                                        // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLightMaterialSchedule               K2Node_MakeStruct_SBLightMaterialSchedule;         // 0x0018(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightScheduleComponent_C_SetVariableMaterial) == 0x000008, "Wrong alignment on LightScheduleComponent_C_SetVariableMaterial");
static_assert(sizeof(LightScheduleComponent_C_SetVariableMaterial) == 0x000038, "Wrong size on LightScheduleComponent_C_SetVariableMaterial");
static_assert(offsetof(LightScheduleComponent_C_SetVariableMaterial, MaterialInstance) == 0x000000, "Member 'LightScheduleComponent_C_SetVariableMaterial::MaterialInstance' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_SetVariableMaterial, ParameterName) == 0x000008, "Member 'LightScheduleComponent_C_SetVariableMaterial::ParameterName' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_SetVariableMaterial, Intencity) == 0x000010, "Member 'LightScheduleComponent_C_SetVariableMaterial::Intencity' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_SetVariableMaterial, ArrayIndex) == 0x000014, "Member 'LightScheduleComponent_C_SetVariableMaterial::ArrayIndex' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_SetVariableMaterial, K2Node_MakeStruct_SBLightMaterialSchedule) == 0x000018, "Member 'LightScheduleComponent_C_SetVariableMaterial::K2Node_MakeStruct_SBLightMaterialSchedule' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_SetVariableMaterial, CallFunc_Array_AddUnique_ReturnValue) == 0x000030, "Member 'LightScheduleComponent_C_SetVariableMaterial::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

// Function LightScheduleComponent.LightScheduleComponent_C.Set Variable Light All
// 0x0040 (0x0040 - 0x0000)
struct LightScheduleComponent_C_Set_Variable_Light_All final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_992F[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULightComponent*>                CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9930[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULightComponent*                        CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LightScheduleComponent_C_Set_Variable_Light_All) == 0x000008, "Wrong alignment on LightScheduleComponent_C_Set_Variable_Light_All");
static_assert(sizeof(LightScheduleComponent_C_Set_Variable_Light_All) == 0x000040, "Wrong size on LightScheduleComponent_C_Set_Variable_Light_All");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, Temp_int_Array_Index_Variable) == 0x000000, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000018, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, CallFunc_Array_Get_Item) == 0x000030, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_Set_Variable_Light_All, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'LightScheduleComponent_C_Set_Variable_Light_All::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function LightScheduleComponent.LightScheduleComponent_C.GetVariableMaterial
// 0x0010 (0x0010 - 0x0000)
struct LightScheduleComponent_C_GetVariableMaterial final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9931[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               NewParam;                                          // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightScheduleComponent_C_GetVariableMaterial) == 0x000008, "Wrong alignment on LightScheduleComponent_C_GetVariableMaterial");
static_assert(sizeof(LightScheduleComponent_C_GetVariableMaterial) == 0x000010, "Wrong size on LightScheduleComponent_C_GetVariableMaterial");
static_assert(offsetof(LightScheduleComponent_C_GetVariableMaterial, Param_Index) == 0x000000, "Member 'LightScheduleComponent_C_GetVariableMaterial::Param_Index' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_GetVariableMaterial, NewParam) == 0x000008, "Member 'LightScheduleComponent_C_GetVariableMaterial::NewParam' has a wrong offset!");

// Function LightScheduleComponent.LightScheduleComponent_C.EditorPreview
// 0x004C (0x004C - 0x0000)
struct LightScheduleComponent_C_EditorPreview final
{
public:
	float                                         TimeRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sw;                                                // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9932[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LightOnRate;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayGame_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9933[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9934[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CheckTimeFadeStatus_OutLastTime;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CheckTimeFadeStatus_OutFadeRate;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckTimeFadeStatus_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9935[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LightScheduleComponent_C_EditorPreview) == 0x000004, "Wrong alignment on LightScheduleComponent_C_EditorPreview");
static_assert(sizeof(LightScheduleComponent_C_EditorPreview) == 0x00004C, "Wrong size on LightScheduleComponent_C_EditorPreview");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, TimeRate) == 0x000000, "Member 'LightScheduleComponent_C_EditorPreview::TimeRate' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, Sw) == 0x000004, "Member 'LightScheduleComponent_C_EditorPreview::Sw' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, ReturnValue) == 0x000005, "Member 'LightScheduleComponent_C_EditorPreview::ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, LightOnRate) == 0x000008, "Member 'LightScheduleComponent_C_EditorPreview::LightOnRate' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_IsPlayGame_ReturnValue) == 0x00000C, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_IsPlayGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_FFloor_ReturnValue) == 0x000014, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000018, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Multiply_IntInt_ReturnValue) == 0x00001C, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000020, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000024, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_FTrunc_ReturnValue) == 0x000028, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_CheckTimeFadeStatus_OutLastTime) == 0x000034, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_CheckTimeFadeStatus_OutLastTime' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_CheckTimeFadeStatus_OutFadeRate) == 0x000038, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_CheckTimeFadeStatus_OutFadeRate' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_CheckTimeFadeStatus_ReturnValue) == 0x00003C, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_CheckTimeFadeStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000040, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_SelectFloat_ReturnValue) == 0x000044, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LightScheduleComponent_C_EditorPreview, CallFunc_Not_PreBool_ReturnValue_1) == 0x000048, "Member 'LightScheduleComponent_C_EditorPreview::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

}

