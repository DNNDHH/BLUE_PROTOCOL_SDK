#pragma once

 

// Package: Expectation_ImagineStackBMax_ToolTip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Expectation_ImagineStackBMax_ToolTip.Expectation_ImagineStackBMax_ToolTip_C
// 0x02B0 (0x0528 - 0x0278)
class UExpectation_ImagineStackBMax_ToolTip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    AbilityName;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Atk;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Def;                                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DEX;                                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ImagineStat;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineTypeView_C*                     ImagineTypeView;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    INT;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Level;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MND;                                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RT_Title;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_EquipStatus;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    STR;                                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Dex;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Int;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Mnd;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Str;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Vit;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    VIT;                                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Own_Item_Info;                                     // 0x0338(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ItemId;                                            // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9299[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       Imagine_Master;                                    // 0x0458(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsOwnItemMode;                                    // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_929A[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterImagineData                Character_Imagine_Data;                            // 0x0510(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_Expectation_ImagineStackBMax_ToolTip(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetStackBMaxInfoByOwnItem(const struct FOwnItemInfo& OwnItemInfo);
	void SetTitle();
	void SetStackBMaxInfoByRecepiId(int32 Param_ItemId);
	void SetImagineLevel(int32 ImagineLevel);
	void SetImagineBaseParamsByMaster();
	void SetImagineBaseParamsByOwnItemInfo();
	void SetAbilityName();
	void SetImagineTypeViewInfos();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Expectation_ImagineStackBMax_ToolTip_C">();
	}
	static class UExpectation_ImagineStackBMax_ToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExpectation_ImagineStackBMax_ToolTip_C>();
	}
};
static_assert(alignof(UExpectation_ImagineStackBMax_ToolTip_C) == 0x000008, "Wrong alignment on UExpectation_ImagineStackBMax_ToolTip_C");
static_assert(sizeof(UExpectation_ImagineStackBMax_ToolTip_C) == 0x000528, "Wrong size on UExpectation_ImagineStackBMax_ToolTip_C");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, UberGraphFrame) == 0x000278, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, AbilityName) == 0x000280, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::AbilityName' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Atk) == 0x000288, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Atk' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, BG) == 0x000290, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::BG' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Def) == 0x000298, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Def' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, DEX) == 0x0002A0, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::DEX' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Image_4) == 0x0002A8, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Image_4' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Image_5) == 0x0002B0, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Image_5' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Image_6) == 0x0002B8, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Image_6' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Image_7) == 0x0002C0, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Image_7' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, ImagineStat) == 0x0002C8, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::ImagineStat' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, ImagineTypeView) == 0x0002D0, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::ImagineTypeView' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, INT) == 0x0002D8, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::INT' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Level) == 0x0002E0, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Level' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, MND) == 0x0002E8, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::MND' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, RT_Title) == 0x0002F0, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::RT_Title' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, SB_EquipStatus) == 0x0002F8, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::SB_EquipStatus' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, STR) == 0x000300, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::STR' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Txt_Dex) == 0x000308, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Txt_Dex' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Txt_Int) == 0x000310, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Txt_Int' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Txt_Mnd) == 0x000318, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Txt_Mnd' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Txt_Str) == 0x000320, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Txt_Str' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Txt_Vit) == 0x000328, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Txt_Vit' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, VIT) == 0x000330, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::VIT' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Own_Item_Info) == 0x000338, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Own_Item_Info' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, ItemId) == 0x000450, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::ItemId' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Imagine_Master) == 0x000458, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Imagine_Master' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, bIsOwnItemMode) == 0x000508, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::bIsOwnItemMode' has a wrong offset!");
static_assert(offsetof(UExpectation_ImagineStackBMax_ToolTip_C, Character_Imagine_Data) == 0x000510, "Member 'UExpectation_ImagineStackBMax_ToolTip_C::Character_Imagine_Data' has a wrong offset!");

}
