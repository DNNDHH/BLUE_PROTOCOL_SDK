#pragma once

 

// Package: AssetRegistry

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct AssetRegistry.TagAndValue
// 0x0018 (0x0018 - 0x0000)
struct FTagAndValue final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0008(0x0010)(BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FTagAndValue) == 0x000008, "Wrong alignment on FTagAndValue");
static_assert(sizeof(FTagAndValue) == 0x000018, "Wrong size on FTagAndValue");
static_assert(offsetof(FTagAndValue, Tag) == 0x000000, "Member 'FTagAndValue::Tag' has a wrong offset!");
static_assert(offsetof(FTagAndValue, Value) == 0x000008, "Member 'FTagAndValue::Value' has a wrong offset!");

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// 0x0005 (0x0005 - 0x0000)
struct FAssetRegistryDependencyOptions final
{
public:
	bool                                          bIncludeSoftPackageReferences;                     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeHardPackageReferences;                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeSearchableNames;                           // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeSoftManagementReferences;                  // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeHardManagementReferences;                  // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAssetRegistryDependencyOptions) == 0x000001, "Wrong alignment on FAssetRegistryDependencyOptions");
static_assert(sizeof(FAssetRegistryDependencyOptions) == 0x000005, "Wrong size on FAssetRegistryDependencyOptions");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeSoftPackageReferences) == 0x000000, "Member 'FAssetRegistryDependencyOptions::bIncludeSoftPackageReferences' has a wrong offset!");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeHardPackageReferences) == 0x000001, "Member 'FAssetRegistryDependencyOptions::bIncludeHardPackageReferences' has a wrong offset!");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeSearchableNames) == 0x000002, "Member 'FAssetRegistryDependencyOptions::bIncludeSearchableNames' has a wrong offset!");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeSoftManagementReferences) == 0x000003, "Member 'FAssetRegistryDependencyOptions::bIncludeSoftManagementReferences' has a wrong offset!");
static_assert(offsetof(FAssetRegistryDependencyOptions, bIncludeHardManagementReferences) == 0x000004, "Member 'FAssetRegistryDependencyOptions::bIncludeHardManagementReferences' has a wrong offset!");

}
