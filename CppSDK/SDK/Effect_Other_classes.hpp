#pragma once

 

// Package: Effect_Other

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Effect_Other.Effect_Other_C
// 0x0030 (0x02A8 - 0x0278)
class UEffect_Other_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Time;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Category;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Value;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bPermanent;                                        // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Effect_Other(int32 EntryPoint);
	void UpdateTime(const struct FDateTime& LimitTime);
	void ActiveData(const class FText& Category, const class FText& Param_Name, const class FText& Value, bool bValidTime, const struct FDateTime& LimitTime, bool Permanent);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_Other_C">();
	}
	static class UEffect_Other_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_Other_C>();
	}
};
static_assert(alignof(UEffect_Other_C) == 0x000008, "Wrong alignment on UEffect_Other_C");
static_assert(sizeof(UEffect_Other_C) == 0x0002A8, "Wrong size on UEffect_Other_C");
static_assert(offsetof(UEffect_Other_C, UberGraphFrame) == 0x000278, "Member 'UEffect_Other_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEffect_Other_C, SBDateTimeTextBlock_Time) == 0x000280, "Member 'UEffect_Other_C::SBDateTimeTextBlock_Time' has a wrong offset!");
static_assert(offsetof(UEffect_Other_C, Txt_Category) == 0x000288, "Member 'UEffect_Other_C::Txt_Category' has a wrong offset!");
static_assert(offsetof(UEffect_Other_C, Txt_Name) == 0x000290, "Member 'UEffect_Other_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UEffect_Other_C, Txt_Value) == 0x000298, "Member 'UEffect_Other_C::Txt_Value' has a wrong offset!");
static_assert(offsetof(UEffect_Other_C, bPermanent) == 0x0002A0, "Member 'UEffect_Other_C::bPermanent' has a wrong offset!");

}

