#pragma once

 

// Package: MyCharaMenu_Drink

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.ExecuteUbergraph_MyCharaMenu_Drink
// 0x0180 (0x0180 - 0x0000)
struct MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B09[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_Array_Get_Item;                           // 0x0018(0x0028)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B0A[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B0B[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Name_1;                         // 0x0050(0x0018)()
	float                                         K2Node_CustomEvent_Value_1;                        // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLiquidMemoryEfficacyValueType              K2Node_CustomEvent_EffucaryValueType;              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B0C[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Name;                           // 0x0070(0x0018)()
	float                                         K2Node_CustomEvent_Value;                          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B0D[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UEffect_Drink_C*                        CallFunc_Create_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B0E[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEffect_Drink_C*                        CallFunc_Create_ReturnValue_1;                     // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryInfo>            CallFunc_GetLiquidMemoryInfos_ReturnValue;         // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B0F[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindLiquidMemoryMaster_IsExists;       // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B10[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryMasterData              CallFunc_BP_FindLiquidMemoryMaster_ReturnValue;    // 0x0108(0x0038)()
	float                                         CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue; // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B11[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetLiquidMemoryText_ReturnValue;          // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B12[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x017D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink) == 0x000008, "Wrong alignment on MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink");
static_assert(sizeof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink) == 0x000180, "Wrong size on MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, EntryPoint) == 0x000000, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GetClassLevel_ReturnValue) == 0x000004, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, Temp_int_Array_Index_Variable) == 0x000008, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Array_Get_Item) == 0x000018, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000048, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, K2Node_CustomEvent_Name_1) == 0x000050, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::K2Node_CustomEvent_Name_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, K2Node_CustomEvent_Value_1) == 0x000068, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::K2Node_CustomEvent_Value_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, K2Node_CustomEvent_EffucaryValueType) == 0x00006C, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::K2Node_CustomEvent_EffucaryValueType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, K2Node_CustomEvent_Name) == 0x000070, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::K2Node_CustomEvent_Name' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, K2Node_CustomEvent_Value) == 0x000088, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Conv_TextToString_ReturnValue) == 0x000090, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000A0, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Create_ReturnValue) == 0x0000B0, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_AddChild_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GetNetworkDataCache_IsValid) == 0x0000C0, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000C8, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Create_ReturnValue_1) == 0x0000D0, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GetLiquidMemoryInfos_ReturnValue) == 0x0000D8, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GetLiquidMemoryInfos_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_AddChild_ReturnValue_1) == 0x0000E8, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GetMasterDataManager_IsValid) == 0x0000F0, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000F8, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_BP_FindLiquidMemoryMaster_IsExists) == 0x000100, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_BP_FindLiquidMemoryMaster_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_BP_FindLiquidMemoryMaster_ReturnValue) == 0x000108, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_BP_FindLiquidMemoryMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue) == 0x000140, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_BP_GetLiquidMemoryEfficacyValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GetLiquidMemoryText_ReturnValue) == 0x000148, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GetLiquidMemoryText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000158, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000178, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00017C, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink, CallFunc_BooleanOR_ReturnValue) == 0x00017D, "Member 'MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add NonActive Param
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_Drink_C_Add_NonActive_Param final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         Value;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Drink_C_Add_NonActive_Param) == 0x000008, "Wrong alignment on MyCharaMenu_Drink_C_Add_NonActive_Param");
static_assert(sizeof(MyCharaMenu_Drink_C_Add_NonActive_Param) == 0x000020, "Wrong size on MyCharaMenu_Drink_C_Add_NonActive_Param");
static_assert(offsetof(MyCharaMenu_Drink_C_Add_NonActive_Param, Param_Name) == 0x000000, "Member 'MyCharaMenu_Drink_C_Add_NonActive_Param::Param_Name' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_Add_NonActive_Param, Value) == 0x000018, "Member 'MyCharaMenu_Drink_C_Add_NonActive_Param::Value' has a wrong offset!");

// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add Active Param
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_Drink_C_Add_Active_Param final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                         Value;                                             // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLiquidMemoryEfficacyValueType              EffucaryValueType;                                 // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Drink_C_Add_Active_Param) == 0x000008, "Wrong alignment on MyCharaMenu_Drink_C_Add_Active_Param");
static_assert(sizeof(MyCharaMenu_Drink_C_Add_Active_Param) == 0x000020, "Wrong size on MyCharaMenu_Drink_C_Add_Active_Param");
static_assert(offsetof(MyCharaMenu_Drink_C_Add_Active_Param, Param_Name) == 0x000000, "Member 'MyCharaMenu_Drink_C_Add_Active_Param::Param_Name' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_Add_Active_Param, Value) == 0x000018, "Member 'MyCharaMenu_Drink_C_Add_Active_Param::Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Drink_C_Add_Active_Param, EffucaryValueType) == 0x00001C, "Member 'MyCharaMenu_Drink_C_Add_Active_Param::EffucaryValueType' has a wrong offset!");

}

