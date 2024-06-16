#pragma once

 

// Package: EventShopTabBox_Banner

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "ST_ShopIconData_structs.hpp"


namespace SDK::Params
{

// Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.ExecuteUbergraph_EventShopTabBox_Banner
// 0x0060 (0x0060 - 0x0000)
struct EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B49[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Texture;                        // 0x0010(0x0028)(HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner) == 0x000008, "Wrong alignment on EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner");
static_assert(sizeof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner) == 0x000060, "Wrong size on EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, EntryPoint) == 0x000000, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::EntryPoint' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, K2Node_CustomEvent_Texture) == 0x000010, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, Temp_object_Variable) == 0x000038, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, K2Node_DynamicCast_AsTexture_2D) == 0x000050, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner, CallFunc_IsValid_ReturnValue_1) == 0x00005A, "Member 'EventShopTabBox_Banner_C_ExecuteUbergraph_EventShopTabBox_Banner::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.LoadTexture2D
// 0x0028 (0x0028 - 0x0000)
struct EventShopTabBox_Banner_C_LoadTexture2D final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTabBox_Banner_C_LoadTexture2D) == 0x000008, "Wrong alignment on EventShopTabBox_Banner_C_LoadTexture2D");
static_assert(sizeof(EventShopTabBox_Banner_C_LoadTexture2D) == 0x000028, "Wrong size on EventShopTabBox_Banner_C_LoadTexture2D");
static_assert(offsetof(EventShopTabBox_Banner_C_LoadTexture2D, Texture) == 0x000000, "Member 'EventShopTabBox_Banner_C_LoadTexture2D::Texture' has a wrong offset!");

// Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6
// 0x0008 (0x0008 - 0x0000)
struct EventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6) == 0x000008, "Wrong alignment on EventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6");
static_assert(sizeof(EventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6) == 0x000008, "Wrong size on EventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6");
static_assert(offsetof(EventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6, Loaded) == 0x000000, "Member 'EventShopTabBox_Banner_C_OnLoaded_F1FE58E8472CCC30C94EBB842B2CECF6::Loaded' has a wrong offset!");

// Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.SetBtnSelected
// 0x0002 (0x0002 - 0x0000)
struct EventShopTabBox_Banner_C_SetBtnSelected final
{
public:
	bool                                          IsSelect;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RegistReadedIdByInt_bIsValid;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopTabBox_Banner_C_SetBtnSelected) == 0x000001, "Wrong alignment on EventShopTabBox_Banner_C_SetBtnSelected");
static_assert(sizeof(EventShopTabBox_Banner_C_SetBtnSelected) == 0x000002, "Wrong size on EventShopTabBox_Banner_C_SetBtnSelected");
static_assert(offsetof(EventShopTabBox_Banner_C_SetBtnSelected, IsSelect) == 0x000000, "Member 'EventShopTabBox_Banner_C_SetBtnSelected::IsSelect' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetBtnSelected, CallFunc_RegistReadedIdByInt_bIsValid) == 0x000001, "Member 'EventShopTabBox_Banner_C_SetBtnSelected::CallFunc_RegistReadedIdByInt_bIsValid' has a wrong offset!");

// Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.SetEventInfo
// 0x0060 (0x0060 - 0x0000)
struct EventShopTabBox_Banner_C_SetEventInfo final
{
public:
	int32                                         Param_EventId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsReadedIdByInt_bIsValid;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsReadedIdByInt_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B4A[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetBannerTexture_Texture;                 // 0x0008(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8B4B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(EventShopTabBox_Banner_C_SetEventInfo) == 0x000008, "Wrong alignment on EventShopTabBox_Banner_C_SetEventInfo");
static_assert(sizeof(EventShopTabBox_Banner_C_SetEventInfo) == 0x000060, "Wrong size on EventShopTabBox_Banner_C_SetEventInfo");
static_assert(offsetof(EventShopTabBox_Banner_C_SetEventInfo, Param_EventId) == 0x000000, "Member 'EventShopTabBox_Banner_C_SetEventInfo::Param_EventId' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetEventInfo, CallFunc_IsReadedIdByInt_bIsValid) == 0x000004, "Member 'EventShopTabBox_Banner_C_SetEventInfo::CallFunc_IsReadedIdByInt_bIsValid' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetEventInfo, CallFunc_IsReadedIdByInt_ReturnValue) == 0x000005, "Member 'EventShopTabBox_Banner_C_SetEventInfo::CallFunc_IsReadedIdByInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetEventInfo, CallFunc_GetBannerTexture_Texture) == 0x000008, "Member 'EventShopTabBox_Banner_C_SetEventInfo::CallFunc_GetBannerTexture_Texture' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetEventInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'EventShopTabBox_Banner_C_SetEventInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetEventInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'EventShopTabBox_Banner_C_SetEventInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetEventInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'EventShopTabBox_Banner_C_SetEventInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.GetBannerTexture
// 0x00C8 (0x00C8 - 0x0000)
struct EventShopTabBox_Banner_C_GetBannerTexture final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B4C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0008(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ShopIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x0078)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EventShopTabBox_Banner_C_GetBannerTexture) == 0x000008, "Wrong alignment on EventShopTabBox_Banner_C_GetBannerTexture");
static_assert(sizeof(EventShopTabBox_Banner_C_GetBannerTexture) == 0x0000C8, "Wrong size on EventShopTabBox_Banner_C_GetBannerTexture");
static_assert(offsetof(EventShopTabBox_Banner_C_GetBannerTexture, ID) == 0x000000, "Member 'EventShopTabBox_Banner_C_GetBannerTexture::ID' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_GetBannerTexture, Texture) == 0x000008, "Member 'EventShopTabBox_Banner_C_GetBannerTexture::Texture' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_GetBannerTexture, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'EventShopTabBox_Banner_C_GetBannerTexture::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_GetBannerTexture, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'EventShopTabBox_Banner_C_GetBannerTexture::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_GetBannerTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'EventShopTabBox_Banner_C_GetBannerTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_GetBannerTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000C0, "Member 'EventShopTabBox_Banner_C_GetBannerTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_GetBannerTexture, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000C1, "Member 'EventShopTabBox_Banner_C_GetBannerTexture::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function EventShopTabBox_Banner.EventShopTabBox_Banner_C.SetNewIcon
// 0x0005 (0x0005 - 0x0000)
struct EventShopTabBox_Banner_C_SetNewIcon final
{
public:
	bool                                          IsNew;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopTabBox_Banner_C_SetNewIcon) == 0x000001, "Wrong alignment on EventShopTabBox_Banner_C_SetNewIcon");
static_assert(sizeof(EventShopTabBox_Banner_C_SetNewIcon) == 0x000005, "Wrong size on EventShopTabBox_Banner_C_SetNewIcon");
static_assert(offsetof(EventShopTabBox_Banner_C_SetNewIcon, IsNew) == 0x000000, "Member 'EventShopTabBox_Banner_C_SetNewIcon::IsNew' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetNewIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'EventShopTabBox_Banner_C_SetNewIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetNewIcon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'EventShopTabBox_Banner_C_SetNewIcon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetNewIcon, Temp_bool_Variable) == 0x000003, "Member 'EventShopTabBox_Banner_C_SetNewIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(EventShopTabBox_Banner_C_SetNewIcon, K2Node_Select_Default) == 0x000004, "Member 'EventShopTabBox_Banner_C_SetNewIcon::K2Node_Select_Default' has a wrong offset!");

}

