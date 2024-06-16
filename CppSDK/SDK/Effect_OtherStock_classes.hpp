#pragma once

 

// Package: Effect_OtherStock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Effect_OtherStock.Effect_OtherStock_C
// 0x0028 (0x02A0 - 0x0278)
class UEffect_OtherStock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Txt_Amount;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Buff;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Item;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Num;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Effect_OtherStock(int32 EntryPoint);
	void NotActiveData(const class FText& Buff, const class FText& Item, const class FText& Amount, const class FText& Value);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_OtherStock_C">();
	}
	static class UEffect_OtherStock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_OtherStock_C>();
	}
};
static_assert(alignof(UEffect_OtherStock_C) == 0x000008, "Wrong alignment on UEffect_OtherStock_C");
static_assert(sizeof(UEffect_OtherStock_C) == 0x0002A0, "Wrong size on UEffect_OtherStock_C");
static_assert(offsetof(UEffect_OtherStock_C, UberGraphFrame) == 0x000278, "Member 'UEffect_OtherStock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEffect_OtherStock_C, Txt_Amount) == 0x000280, "Member 'UEffect_OtherStock_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UEffect_OtherStock_C, Txt_Buff) == 0x000288, "Member 'UEffect_OtherStock_C::Txt_Buff' has a wrong offset!");
static_assert(offsetof(UEffect_OtherStock_C, Txt_Item) == 0x000290, "Member 'UEffect_OtherStock_C::Txt_Item' has a wrong offset!");
static_assert(offsetof(UEffect_OtherStock_C, Txt_Num) == 0x000298, "Member 'UEffect_OtherStock_C::Txt_Num' has a wrong offset!");

}

