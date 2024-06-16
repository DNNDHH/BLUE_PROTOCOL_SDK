#pragma once

 

// Package: CmnNumber1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnNumber1.CmnNumber1_C
// 0x0018 (0x0290 - 0x0278)
class UCmnNumber1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Number;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               NumberMat;                                         // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnNumber1(int32 EntryPoint);
	void Construct();
	void SetNumber(int32 NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnNumber1_C">();
	}
	static class UCmnNumber1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnNumber1_C>();
	}
};
static_assert(alignof(UCmnNumber1_C) == 0x000008, "Wrong alignment on UCmnNumber1_C");
static_assert(sizeof(UCmnNumber1_C) == 0x000290, "Wrong size on UCmnNumber1_C");
static_assert(offsetof(UCmnNumber1_C, UberGraphFrame) == 0x000278, "Member 'UCmnNumber1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnNumber1_C, Number) == 0x000280, "Member 'UCmnNumber1_C::Number' has a wrong offset!");
static_assert(offsetof(UCmnNumber1_C, NumberMat) == 0x000288, "Member 'UCmnNumber1_C::NumberMat' has a wrong offset!");

}

