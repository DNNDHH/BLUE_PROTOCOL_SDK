#pragma once

 

// Package: CmnOperationRotate

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CmnOperationRotate.CmnOperationRotate_C.ExecuteUbergraph_CmnOperationRotate
// 0x0048 (0x0048 - 0x0000)
struct CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_497D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_497E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_497F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                CallFunc_GetOperateMode_ReturnValue_1;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_2;           // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4980[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_2;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate) == 0x000008, "Wrong alignment on CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate");
static_assert(sizeof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate) == 0x000048, "Wrong size on CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, EntryPoint) == 0x000000, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetOperateMode_ReturnValue) == 0x000004, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetOperateMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetConfigSaveManager_IsValid) == 0x000018, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000020, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetConfigSaveManager_IsValid_1) == 0x000028, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x000030, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetOperateMode_ReturnValue_1) == 0x000038, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetOperateMode_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000039, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetConfigSaveManager_IsValid_2) == 0x00003A, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetConfigSaveManager_IsValid_2' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate, CallFunc_GetConfigSaveManager_ReturnValue_2) == 0x000040, "Member 'CmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate::CallFunc_GetConfigSaveManager_ReturnValue_2' has a wrong offset!");

// Function CmnOperationRotate.CmnOperationRotate_C.SwitchIconByOperateMode
// 0x0018 (0x0018 - 0x0000)
struct CmnOperationRotate_C_SwitchIconByOperateMode final
{
public:
	ESBOperateMode                                InOperateMode;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBOperateMode                                Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4981[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnOperationRotate_C_SwitchIconByOperateMode) == 0x000004, "Wrong alignment on CmnOperationRotate_C_SwitchIconByOperateMode");
static_assert(sizeof(CmnOperationRotate_C_SwitchIconByOperateMode) == 0x000018, "Wrong size on CmnOperationRotate_C_SwitchIconByOperateMode");
static_assert(offsetof(CmnOperationRotate_C_SwitchIconByOperateMode, InOperateMode) == 0x000000, "Member 'CmnOperationRotate_C_SwitchIconByOperateMode::InOperateMode' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_SwitchIconByOperateMode, Temp_byte_Variable) == 0x000001, "Member 'CmnOperationRotate_C_SwitchIconByOperateMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_SwitchIconByOperateMode, Temp_int_Variable) == 0x000004, "Member 'CmnOperationRotate_C_SwitchIconByOperateMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_SwitchIconByOperateMode, Temp_int_Variable_1) == 0x000008, "Member 'CmnOperationRotate_C_SwitchIconByOperateMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_SwitchIconByOperateMode, Temp_int_Variable_2) == 0x00000C, "Member 'CmnOperationRotate_C_SwitchIconByOperateMode::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_SwitchIconByOperateMode, K2Node_Select_Default) == 0x000010, "Member 'CmnOperationRotate_C_SwitchIconByOperateMode::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnOperationRotate_C_SwitchIconByOperateMode, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'CmnOperationRotate_C_SwitchIconByOperateMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

