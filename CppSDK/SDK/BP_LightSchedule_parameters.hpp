#pragma once

 

// Package: BP_LightSchedule

#include "Basic.hpp"

#include "RandomLightScheduleParam_structs.hpp"


namespace SDK::Params
{

// Function BP_LightSchedule.BP_LightSchedule_C.ExecuteUbergraph_BP_LightSchedule
// 0x0228 (0x0228 - 0x0000)
struct BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97AE[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97AF[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B0[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULightScheduleComponent_C*>      CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ULightScheduleComponent_C*              CallFunc_Array_Get_Item_1;                         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B1[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B2[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIntFromActorName_ReturnValue;          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B3[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B4[0x1];                                     // 0x00AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URandomLightMaterialScheduleComponent_C*> CallFunc_K2_GetComponentsByClass_ReturnValue_1;    // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97B5[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRandomLightScheduleParam              CallFunc_Array_Get_Item_2;                         // 0x00D8(0x0020)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_3;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_11;                // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_12;                // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B6[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x0138(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item_3;                         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B7[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_2;            // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_13;                // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B8[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_14;                // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97B9[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_15;                // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_4;             // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULightScheduleComponent_C*              CallFunc_Array_Get_Item_4;                         // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_5;             // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97BA[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULightScheduleComponent_C*              CallFunc_Array_Get_Item_5;                         // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97BB[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97BC[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_DynamicSky_C*>               CallFunc_GetAllActorsOfClass_OutActors_2;          // 0x01A0(0x0010)(ReferenceParm)
	class ABP_DynamicSky_C*                       CallFunc_Array_Get_Item_6;                         // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPrevTimeUpdated_ReturnValue;           // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97BD[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_7;               // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;             // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97BE[0x2];                                     // 0x01C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_5;                   // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97BF[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULightScheduleComponent_C*>      CallFunc_GetAllComponentsOfClass_OutComponents;    // 0x01D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_Event_Sw;                                   // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97C0[0x3];                                     // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_8;               // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayGame_ReturnValue;                   // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97C1[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue_2;              // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97C2[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class URandomLightMaterialScheduleComponent_C*> CallFunc_K2_GetComponentsByClass_ReturnValue_2;    // 0x01F8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class URandomLightMaterialScheduleComponent_C* CallFunc_Array_Get_Item_7;                         // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_9;               // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97C3[0x3];                                     // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class URandomLightMaterialScheduleComponent_C* CallFunc_Array_Get_Item_8;                         // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_10;              // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule) == 0x000008, "Wrong alignment on BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule");
static_assert(sizeof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule) == 0x000228, "Wrong size on BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, EntryPoint) == 0x000000, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_bool_Variable) == 0x00000C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Not_PreBool_ReturnValue) == 0x00000D, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Loop_Counter_Variable_2) == 0x00001C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_2) == 0x000020, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Array_Index_Variable_1) == 0x000024, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Loop_Counter_Variable_3) == 0x000028, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_3) == 0x00002C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Array_Index_Variable_2) == 0x000030, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Loop_Counter_Variable_4) == 0x000034, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_4) == 0x000038, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Array_Index_Variable_3) == 0x00003C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_GetAllActorsOfClass_OutActors) == 0x000040, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000068, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Less_IntInt_ReturnValue_1) == 0x000084, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_2) == 0x000088, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Greater_IntInt_ReturnValue) == 0x00008C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_GetIntFromActorName_ReturnValue) == 0x000090, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_GetIntFromActorName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_3) == 0x000094, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Loop_Counter_Variable_5) == 0x000098, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Loop_Counter_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_IsServer_ReturnValue) == 0x00009C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Less_IntInt_ReturnValue_2) == 0x00009D, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_5) == 0x0000A0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_RandomIntegerInRange_ReturnValue) == 0x0000A4, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_RandomIntegerInRange_ReturnValue_1) == 0x0000A8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_RandomIntegerInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000AC, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000AD, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_BooleanAND_ReturnValue) == 0x0000AE, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_6) == 0x0000B0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Variable) == 0x0000B4, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_7) == 0x0000B8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_8) == 0x0000BC, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_K2_GetComponentsByClass_ReturnValue_1) == 0x0000C0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_K2_GetComponentsByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Array_Index_Variable_4) == 0x0000D0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_2) == 0x0000D8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Percent_IntInt_ReturnValue) == 0x0000F8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Percent_IntInt_ReturnValue_1) == 0x0000FC, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Percent_IntInt_ReturnValue_2) == 0x000100, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Percent_IntInt_ReturnValue_3) == 0x000104, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Percent_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Divide_IntInt_ReturnValue) == 0x000108, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Divide_IntInt_ReturnValue_1) == 0x00010C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Multiply_IntInt_ReturnValue) == 0x000110, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000114, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_9) == 0x000118, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_10) == 0x00011C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_11) == 0x000120, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_12) == 0x000124, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Add_ReturnValue) == 0x000128, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Add_ReturnValue_1) == 0x00012C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000130, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000138, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_3) == 0x000148, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000150, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, K2Node_Event_DeltaSeconds) == 0x000154, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Multiply_IntInt_ReturnValue_2) == 0x000158, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Multiply_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_13) == 0x00015C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_IsDedicatedServer_ReturnValue) == 0x000160, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000161, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_14) == 0x000164, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_BooleanAND_ReturnValue_1) == 0x000168, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Add_IntInt_ReturnValue_15) == 0x00016C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Add_IntInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_4) == 0x000170, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Percent_IntInt_ReturnValue_4) == 0x000174, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Percent_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_4) == 0x000178, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Percent_IntInt_ReturnValue_5) == 0x000180, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Percent_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_5) == 0x000188, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_5) == 0x000190, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000194, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_6) == 0x000198, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Less_IntInt_ReturnValue_3) == 0x00019C, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x0001A0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_6) == 0x0001B0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_GetPrevTimeUpdated_ReturnValue) == 0x0001B8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_GetPrevTimeUpdated_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_IsValid_ReturnValue) == 0x0001B9, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_7) == 0x0001BC, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_BooleanAND_ReturnValue_2) == 0x0001C0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0001C1, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, Temp_int_Array_Index_Variable_5) == 0x0001C4, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::Temp_int_Array_Index_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0001C8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_GetAllComponentsOfClass_OutComponents) == 0x0001D0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_GetAllComponentsOfClass_OutComponents' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, K2Node_Event_Sw) == 0x0001E0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::K2Node_Event_Sw' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_8) == 0x0001E4, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_IsPlayGame_ReturnValue) == 0x0001E8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_IsPlayGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Divide_IntInt_ReturnValue_2) == 0x0001EC, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Divide_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Max_ReturnValue) == 0x0001F0, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_K2_GetComponentsByClass_ReturnValue_2) == 0x0001F8, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_K2_GetComponentsByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_7) == 0x000208, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_9) == 0x000210, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Less_IntInt_ReturnValue_4) == 0x000214, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Get_Item_8) == 0x000218, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Array_Length_ReturnValue_10) == 0x000220, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Array_Length_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule, CallFunc_Less_IntInt_ReturnValue_5) == 0x000224, "Member 'BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");

// Function BP_LightSchedule.BP_LightSchedule_C.InitEditorPreview
// 0x0001 (0x0001 - 0x0000)
struct BP_LightSchedule_C_InitEditorPreview final
{
public:
	bool                                          Sw;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LightSchedule_C_InitEditorPreview) == 0x000001, "Wrong alignment on BP_LightSchedule_C_InitEditorPreview");
static_assert(sizeof(BP_LightSchedule_C_InitEditorPreview) == 0x000001, "Wrong size on BP_LightSchedule_C_InitEditorPreview");
static_assert(offsetof(BP_LightSchedule_C_InitEditorPreview, Sw) == 0x000000, "Member 'BP_LightSchedule_C_InitEditorPreview::Sw' has a wrong offset!");

// Function BP_LightSchedule.BP_LightSchedule_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_LightSchedule_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LightSchedule_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_LightSchedule_C_ReceiveTick");
static_assert(sizeof(BP_LightSchedule_C_ReceiveTick) == 0x000004, "Wrong size on BP_LightSchedule_C_ReceiveTick");
static_assert(offsetof(BP_LightSchedule_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_LightSchedule_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_LightSchedule.BP_LightSchedule_C.UserConstructionScript
// 0x0038 (0x0038 - 0x0000)
struct BP_LightSchedule_C_UserConstructionScript final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97C4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class URandomLightMaterialScheduleComponent_C*> CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97C5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URandomLightMaterialScheduleComponent_C* CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97C6[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MeshesResetToDefaultMaterials_ReturnValue; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LightSchedule_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_LightSchedule_C_UserConstructionScript");
static_assert(sizeof(BP_LightSchedule_C_UserConstructionScript) == 0x000038, "Wrong size on BP_LightSchedule_C_UserConstructionScript");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_LightSchedule_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_LightSchedule_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_LightSchedule_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000010, "Member 'BP_LightSchedule_C_UserConstructionScript::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_LightSchedule_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_LightSchedule_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'BP_LightSchedule_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_UserConstructionScript, CallFunc_MeshesResetToDefaultMaterials_ReturnValue) == 0x000034, "Member 'BP_LightSchedule_C_UserConstructionScript::CallFunc_MeshesResetToDefaultMaterials_ReturnValue' has a wrong offset!");

// Function BP_LightSchedule.BP_LightSchedule_C.IsRandomLightMaterialCompInitialized
// 0x0030 (0x0030 - 0x0000)
struct BP_LightSchedule_C_IsRandomLightMaterialCompInitialized final
{
public:
	int32                                         TmpCount;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URandomLightMaterialScheduleComponent_C* CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97C7[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized) == 0x000008, "Wrong alignment on BP_LightSchedule_C_IsRandomLightMaterialCompInitialized");
static_assert(sizeof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized) == 0x000030, "Wrong size on BP_LightSchedule_C_IsRandomLightMaterialCompInitialized");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, TmpCount) == 0x000000, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::TmpCount' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, Temp_int_Variable) == 0x000010, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, CallFunc_Array_Length_ReturnValue_1) == 0x000028, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LightSchedule_C_IsRandomLightMaterialCompInitialized, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'BP_LightSchedule_C_IsRandomLightMaterialCompInitialized::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

