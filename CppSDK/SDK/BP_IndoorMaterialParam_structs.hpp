#pragma once

 

// Package: BP_IndoorMaterialParam

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct BP_IndoorMaterialParam.BP_IndoorMaterialParam
// 0x0018 (0x0018 - 0x0000)
struct FBP_IndoorMaterialParam final
{
public:
	class UMaterialInstance*                      MaterialInstance_2_B891293B4599BF5659ACFDAAD77BF1BA; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EmissiveColorName_8_572A189C4AC6A028B36615B50876E053; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EmissiveScaleName_10_9D611E2E436C693D65BEC0AA6619EB32; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBP_IndoorMaterialParam) == 0x000008, "Wrong alignment on FBP_IndoorMaterialParam");
static_assert(sizeof(FBP_IndoorMaterialParam) == 0x000018, "Wrong size on FBP_IndoorMaterialParam");
static_assert(offsetof(FBP_IndoorMaterialParam, MaterialInstance_2_B891293B4599BF5659ACFDAAD77BF1BA) == 0x000000, "Member 'FBP_IndoorMaterialParam::MaterialInstance_2_B891293B4599BF5659ACFDAAD77BF1BA' has a wrong offset!");
static_assert(offsetof(FBP_IndoorMaterialParam, EmissiveColorName_8_572A189C4AC6A028B36615B50876E053) == 0x000008, "Member 'FBP_IndoorMaterialParam::EmissiveColorName_8_572A189C4AC6A028B36615B50876E053' has a wrong offset!");
static_assert(offsetof(FBP_IndoorMaterialParam, EmissiveScaleName_10_9D611E2E436C693D65BEC0AA6619EB32) == 0x000010, "Member 'FBP_IndoorMaterialParam::EmissiveScaleName_10_9D611E2E436C693D65BEC0AA6619EB32' has a wrong offset!");

}

