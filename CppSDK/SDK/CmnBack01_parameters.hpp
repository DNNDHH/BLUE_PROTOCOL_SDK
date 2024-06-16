#pragma once

 

// Package: CmnBack01

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnBack01.CmnBack01_C.ExecuteUbergraph_CmnBack01
// 0x0020 (0x0020 - 0x0000)
struct CmnBack01_C_ExecuteUbergraph_CmnBack01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CE4[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBack01_C_ExecuteUbergraph_CmnBack01) == 0x000008, "Wrong alignment on CmnBack01_C_ExecuteUbergraph_CmnBack01");
static_assert(sizeof(CmnBack01_C_ExecuteUbergraph_CmnBack01) == 0x000020, "Wrong size on CmnBack01_C_ExecuteUbergraph_CmnBack01");
static_assert(offsetof(CmnBack01_C_ExecuteUbergraph_CmnBack01, EntryPoint) == 0x000000, "Member 'CmnBack01_C_ExecuteUbergraph_CmnBack01::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnBack01_C_ExecuteUbergraph_CmnBack01, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'CmnBack01_C_ExecuteUbergraph_CmnBack01::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CmnBack01_C_ExecuteUbergraph_CmnBack01, CallFunc_GetConfigSaveManager_IsValid) == 0x000014, "Member 'CmnBack01_C_ExecuteUbergraph_CmnBack01::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CmnBack01_C_ExecuteUbergraph_CmnBack01, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'CmnBack01_C_ExecuteUbergraph_CmnBack01::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");

// Function CmnBack01.CmnBack01_C.UpdateEscText
// 0x0048 (0x0048 - 0x0000)
struct CmnBack01_C_UpdateEscText final
{
public:
	class FString                                 CallFunc_GetUICancelText_ReturnValue;              // 0x0000(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(CmnBack01_C_UpdateEscText) == 0x000008, "Wrong alignment on CmnBack01_C_UpdateEscText");
static_assert(sizeof(CmnBack01_C_UpdateEscText) == 0x000048, "Wrong size on CmnBack01_C_UpdateEscText");
static_assert(offsetof(CmnBack01_C_UpdateEscText, CallFunc_GetUICancelText_ReturnValue) == 0x000000, "Member 'CmnBack01_C_UpdateEscText::CallFunc_GetUICancelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBack01_C_UpdateEscText, CallFunc_Concat_StrStr_ReturnValue) == 0x000010, "Member 'CmnBack01_C_UpdateEscText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBack01_C_UpdateEscText, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000020, "Member 'CmnBack01_C_UpdateEscText::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBack01_C_UpdateEscText, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'CmnBack01_C_UpdateEscText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

