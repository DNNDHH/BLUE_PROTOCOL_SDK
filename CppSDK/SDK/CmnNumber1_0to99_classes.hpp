#pragma once

 

// Package: CmnNumber1_0to99

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnNumber1_0to99.CmnNumber1_0to99_C
// 0x0028 (0x02A0 - 0x0278)
class UCmnNumber1_0to99_C final : public UUserWidget
{
public:
	class UCmnNumber1_C*                          CmnNumber_1;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnNumber1_C*                          CmnNumber_10;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         NumberGrp;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 NumberString;                                      // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void SetNumber(int32 InNumber);
	void GetNumber(int32* OutNumber);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnNumber1_0to99_C">();
	}
	static class UCmnNumber1_0to99_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnNumber1_0to99_C>();
	}
};
static_assert(alignof(UCmnNumber1_0to99_C) == 0x000008, "Wrong alignment on UCmnNumber1_0to99_C");
static_assert(sizeof(UCmnNumber1_0to99_C) == 0x0002A0, "Wrong size on UCmnNumber1_0to99_C");
static_assert(offsetof(UCmnNumber1_0to99_C, CmnNumber_1) == 0x000278, "Member 'UCmnNumber1_0to99_C::CmnNumber_1' has a wrong offset!");
static_assert(offsetof(UCmnNumber1_0to99_C, CmnNumber_10) == 0x000280, "Member 'UCmnNumber1_0to99_C::CmnNumber_10' has a wrong offset!");
static_assert(offsetof(UCmnNumber1_0to99_C, NumberGrp) == 0x000288, "Member 'UCmnNumber1_0to99_C::NumberGrp' has a wrong offset!");
static_assert(offsetof(UCmnNumber1_0to99_C, NumberString) == 0x000290, "Member 'UCmnNumber1_0to99_C::NumberString' has a wrong offset!");

}

