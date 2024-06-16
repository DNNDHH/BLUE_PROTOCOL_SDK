#pragma once

 

// Package: Imagine_StorageSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Imagine_StorageSelector.Imagine_StorageSelector_C
// 0x0078 (0x02F0 - 0x0278)
class UImagine_StorageSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonCmn08_C*                       Btn_Change;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Weapon;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Storage_Weapon;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnChange;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TXT_Warning;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_StorageIcon;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CurrentIsStorage;                                  // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C66[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CraftCount;                                        // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMasterImagineRecepi                   Imagine_Recipe_Master;                             // 0x02B8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Imagine_StorageSelector(int32 EntryPoint);
	void BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Imagine_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Set_RecepiData(const struct FCharacterCraftRecepi& RecepiData);
	void BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateStorageView();

	void IsStorage(bool* Param_CurrentIsStorage) const;
	void GetSelectStorageNo(int32* StorageNo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Imagine_StorageSelector_C">();
	}
	static class UImagine_StorageSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagine_StorageSelector_C>();
	}
};
static_assert(alignof(UImagine_StorageSelector_C) == 0x000008, "Wrong alignment on UImagine_StorageSelector_C");
static_assert(sizeof(UImagine_StorageSelector_C) == 0x0002F0, "Wrong size on UImagine_StorageSelector_C");
static_assert(offsetof(UImagine_StorageSelector_C, UberGraphFrame) == 0x000278, "Member 'UImagine_StorageSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, Btn_Change) == 0x000280, "Member 'UImagine_StorageSelector_C::Btn_Change' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, Img_Bag_Weapon) == 0x000288, "Member 'UImagine_StorageSelector_C::Img_Bag_Weapon' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, Img_Storage_Weapon) == 0x000290, "Member 'UImagine_StorageSelector_C::Img_Storage_Weapon' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, Txt_BtnChange) == 0x000298, "Member 'UImagine_StorageSelector_C::Txt_BtnChange' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, TXT_Warning) == 0x0002A0, "Member 'UImagine_StorageSelector_C::TXT_Warning' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, WS_StorageIcon) == 0x0002A8, "Member 'UImagine_StorageSelector_C::WS_StorageIcon' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, CurrentIsStorage) == 0x0002B0, "Member 'UImagine_StorageSelector_C::CurrentIsStorage' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, CraftCount) == 0x0002B4, "Member 'UImagine_StorageSelector_C::CraftCount' has a wrong offset!");
static_assert(offsetof(UImagine_StorageSelector_C, Imagine_Recipe_Master) == 0x0002B8, "Member 'UImagine_StorageSelector_C::Imagine_Recipe_Master' has a wrong offset!");

}

