#pragma once

 

// Package: History_Item

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass History_Item.History_Item_C
// 0x0038 (0x02B0 - 0x0278)
class UHistory_Item_C final : public UUserWidget
{
public:
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Date;                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Amount01;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Amount02;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Description;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Label01;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Label02;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBHistoryType                                HistoryType;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetData(ESBHistoryType Type, const struct FSBCashHistory& Data);
	void SetAmountNum(int32 Paid, int32 Free);
	void SetAmountCode(int32 Num, class FText* Text);
	void SetActionTypeByTextId(const struct FSBTextTableHash& TextId);
	void SetReasonText(const class FString& Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"History_Item_C">();
	}
	static class UHistory_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHistory_Item_C>();
	}
};
static_assert(alignof(UHistory_Item_C) == 0x000008, "Wrong alignment on UHistory_Item_C");
static_assert(sizeof(UHistory_Item_C) == 0x0002B0, "Wrong size on UHistory_Item_C");
static_assert(offsetof(UHistory_Item_C, SBDateTimeTextBlock_Date) == 0x000278, "Member 'UHistory_Item_C::SBDateTimeTextBlock_Date' has a wrong offset!");
static_assert(offsetof(UHistory_Item_C, Txt_Amount01) == 0x000280, "Member 'UHistory_Item_C::Txt_Amount01' has a wrong offset!");
static_assert(offsetof(UHistory_Item_C, Txt_Amount02) == 0x000288, "Member 'UHistory_Item_C::Txt_Amount02' has a wrong offset!");
static_assert(offsetof(UHistory_Item_C, Txt_Description) == 0x000290, "Member 'UHistory_Item_C::Txt_Description' has a wrong offset!");
static_assert(offsetof(UHistory_Item_C, Txt_Label01) == 0x000298, "Member 'UHistory_Item_C::Txt_Label01' has a wrong offset!");
static_assert(offsetof(UHistory_Item_C, Txt_Label02) == 0x0002A0, "Member 'UHistory_Item_C::Txt_Label02' has a wrong offset!");
static_assert(offsetof(UHistory_Item_C, HistoryType) == 0x0002A8, "Member 'UHistory_Item_C::HistoryType' has a wrong offset!");

}

