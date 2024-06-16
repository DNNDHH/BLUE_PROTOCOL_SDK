#pragma once

 

// Package: BannerIcon

#include "Basic.hpp"

#include "ST_GashaBanner_structs.hpp"


namespace SDK::Params
{

// Function BannerIcon.BannerIcon_C.ExecuteUbergraph_BannerIcon
// 0x0060 (0x0060 - 0x0000)
struct BannerIcon_C_ExecuteUbergraph_BannerIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94E9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_NowLoadTexture;                 // 0x0028(0x0028)(HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BannerIcon_C_ExecuteUbergraph_BannerIcon) == 0x000008, "Wrong alignment on BannerIcon_C_ExecuteUbergraph_BannerIcon");
static_assert(sizeof(BannerIcon_C_ExecuteUbergraph_BannerIcon) == 0x000060, "Wrong size on BannerIcon_C_ExecuteUbergraph_BannerIcon");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, EntryPoint) == 0x000000, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, Temp_object_Variable) == 0x000020, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, K2Node_CustomEvent_NowLoadTexture) == 0x000028, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::K2Node_CustomEvent_NowLoadTexture' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, K2Node_DynamicCast_AsTexture_2D) == 0x000050, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, CallFunc_IsValid_ReturnValue) == 0x000059, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_ExecuteUbergraph_BannerIcon, CallFunc_IsValid_ReturnValue_1) == 0x00005A, "Member 'BannerIcon_C_ExecuteUbergraph_BannerIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BannerIcon.BannerIcon_C.BannerLoadStart
// 0x0028 (0x0028 - 0x0000)
struct BannerIcon_C_BannerLoadStart final
{
public:
	TSoftObjectPtr<class UTexture2D>              NowLoadTexture;                                    // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(BannerIcon_C_BannerLoadStart) == 0x000008, "Wrong alignment on BannerIcon_C_BannerLoadStart");
static_assert(sizeof(BannerIcon_C_BannerLoadStart) == 0x000028, "Wrong size on BannerIcon_C_BannerLoadStart");
static_assert(offsetof(BannerIcon_C_BannerLoadStart, NowLoadTexture) == 0x000000, "Member 'BannerIcon_C_BannerLoadStart::NowLoadTexture' has a wrong offset!");

// Function BannerIcon.BannerIcon_C.OnLoaded_4B7E5655474594DCF8A223A5CD904BF3
// 0x0008 (0x0008 - 0x0000)
struct BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3) == 0x000008, "Wrong alignment on BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3");
static_assert(sizeof(BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3) == 0x000008, "Wrong size on BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3");
static_assert(offsetof(BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3, Loaded) == 0x000000, "Member 'BannerIcon_C_OnLoaded_4B7E5655474594DCF8A223A5CD904BF3::Loaded' has a wrong offset!");

// Function BannerIcon.BannerIcon_C.SetBanner
// 0x0088 (0x0088 - 0x0000)
struct BannerIcon_C_SetBanner final
{
public:
	class FName                                   BannerName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_GashaBanner                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x0030(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BannerIcon_C_SetBanner) == 0x000008, "Wrong alignment on BannerIcon_C_SetBanner");
static_assert(sizeof(BannerIcon_C_SetBanner) == 0x000088, "Wrong size on BannerIcon_C_SetBanner");
static_assert(offsetof(BannerIcon_C_SetBanner, BannerName) == 0x000000, "Member 'BannerIcon_C_SetBanner::BannerName' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_SetBanner, Texture) == 0x000008, "Member 'BannerIcon_C_SetBanner::Texture' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_SetBanner, CallFunc_GetDataTableRowFromName_OutRow) == 0x000030, "Member 'BannerIcon_C_SetBanner::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_SetBanner, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000080, "Member 'BannerIcon_C_SetBanner::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_SetBanner, CallFunc_NotEqual_SoftObjectReference_ReturnValue) == 0x000081, "Member 'BannerIcon_C_SetBanner::CallFunc_NotEqual_SoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BannerIcon_C_SetBanner, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000082, "Member 'BannerIcon_C_SetBanner::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

}

