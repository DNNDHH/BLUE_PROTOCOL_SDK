#pragma once

 

// Package: LoginTopWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoginTopWidget.LoginTopWidget_C.ExecuteUbergraph_LoginTopWidget
// 0x00C0 (0x00C0 - 0x0000)
struct LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E1B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetRevisionText_VersionText;              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnvText_EnvText;                       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEnvText_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E1C[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A8(0x0018)()
};
static_assert(alignof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget) == 0x000008, "Wrong alignment on LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget");
static_assert(sizeof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget) == 0x0000C0, "Wrong size on LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, EntryPoint) == 0x000000, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_GetRevisionText_VersionText) == 0x000008, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_GetRevisionText_VersionText' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_GetEnvText_EnvText) == 0x000018, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_GetEnvText_EnvText' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_GetEnvText_ReturnValue) == 0x000028, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_GetEnvText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_GetTextFromAsset_ReturnValue) == 0x000030, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000078, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000088, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000098, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A8, "Member 'LoginTopWidget_C_ExecuteUbergraph_LoginTopWidget::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

