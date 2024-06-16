#pragma once

 

// Package: EquipPosition

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EquipPosition.EquipPosition_C.SetEquipPosition
// 0x01C8 (0x01C8 - 0x0000)
struct EquipPosition_C_SetEquipPosition final
{
public:
	int32                                         Imagine_Id;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6BFB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       MasterData;                                        // 0x0008(0x00B0)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BFC[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x00C0(0x00B0)()
	int32                                         Temp_int_Variable;                                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BFD[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BFE[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BFF[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0193(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         K2Node_Select_Default;                             // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C00[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_4;                           // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_5;                           // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_6;                           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_7;                           // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquipPosition_C_SetEquipPosition) == 0x000008, "Wrong alignment on EquipPosition_C_SetEquipPosition");
static_assert(sizeof(EquipPosition_C_SetEquipPosition) == 0x0001C8, "Wrong size on EquipPosition_C_SetEquipPosition");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Imagine_Id) == 0x000000, "Member 'EquipPosition_C_SetEquipPosition::Imagine_Id' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, MasterData) == 0x000008, "Member 'EquipPosition_C_SetEquipPosition::MasterData' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable) == 0x0000B8, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, CallFunc_FindImagineMaster_bIsValid) == 0x0000B9, "Member 'EquipPosition_C_SetEquipPosition::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, CallFunc_FindImagineMaster_ImagineMaster) == 0x0000C0, "Member 'EquipPosition_C_SetEquipPosition::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_int_Variable) == 0x000170, "Member 'EquipPosition_C_SetEquipPosition::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_int_Variable_1) == 0x000174, "Member 'EquipPosition_C_SetEquipPosition::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable_1) == 0x000178, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_int_Variable_2) == 0x00017C, "Member 'EquipPosition_C_SetEquipPosition::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable_2) == 0x000180, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_int_Variable_3) == 0x000184, "Member 'EquipPosition_C_SetEquipPosition::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable_3) == 0x000188, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_int_Variable_4) == 0x00018C, "Member 'EquipPosition_C_SetEquipPosition::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable_4) == 0x000190, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable_5) == 0x000191, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable_6) == 0x000192, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, Temp_bool_Variable_7) == 0x000193, "Member 'EquipPosition_C_SetEquipPosition::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default) == 0x000194, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default_1) == 0x000198, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default_2) == 0x00019C, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default_3) == 0x0001A0, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001A4, "Member 'EquipPosition_C_SetEquipPosition::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default_4) == 0x0001A8, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default_5) == 0x0001B0, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default_6) == 0x0001B8, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(EquipPosition_C_SetEquipPosition, K2Node_Select_Default_7) == 0x0001C0, "Member 'EquipPosition_C_SetEquipPosition::K2Node_Select_Default_7' has a wrong offset!");

}

