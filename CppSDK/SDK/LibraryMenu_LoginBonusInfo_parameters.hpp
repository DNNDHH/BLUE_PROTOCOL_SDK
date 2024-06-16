#pragma once

 

// Package: LibraryMenu_LoginBonusInfo

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetData
// 0x0128 (0x0128 - 0x0000)
struct LibraryMenu_LoginBonusInfo_C_SetData final
{
public:
	struct FSBLoginBonusWindowData                LoginBonusData;                                    // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E32[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E33[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0100(0x0018)()
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusInfo_C_SetData) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusInfo_C_SetData");
static_assert(sizeof(LibraryMenu_LoginBonusInfo_C_SetData) == 0x000128, "Wrong size on LibraryMenu_LoginBonusInfo_C_SetData");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, LoginBonusData) == 0x000000, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::LoginBonusData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000E8, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0000F0, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000100, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_DateTimeMinValue_ReturnValue) == 0x000118, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000120, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetData, CallFunc_SetDateTime_ReturnValue) == 0x000121, "Member 'LibraryMenu_LoginBonusInfo_C_SetData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetImageData
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonusInfo_C_SetImageData final
{
public:
	class UTexture2DDynamic*                      Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusInfo_C_SetImageData) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusInfo_C_SetImageData");
static_assert(sizeof(LibraryMenu_LoginBonusInfo_C_SetImageData) == 0x000008, "Wrong size on LibraryMenu_LoginBonusInfo_C_SetImageData");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetImageData, Texture) == 0x000000, "Member 'LibraryMenu_LoginBonusInfo_C_SetImageData::Texture' has a wrong offset!");

// Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetTextureData
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonusInfo_C_SetTextureData final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusInfo_C_SetTextureData) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusInfo_C_SetTextureData");
static_assert(sizeof(LibraryMenu_LoginBonusInfo_C_SetTextureData) == 0x000008, "Wrong size on LibraryMenu_LoginBonusInfo_C_SetTextureData");
static_assert(offsetof(LibraryMenu_LoginBonusInfo_C_SetTextureData, Texture) == 0x000000, "Member 'LibraryMenu_LoginBonusInfo_C_SetTextureData::Texture' has a wrong offset!");

}

