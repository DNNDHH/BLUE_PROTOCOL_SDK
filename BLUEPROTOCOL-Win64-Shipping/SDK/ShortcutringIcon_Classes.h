#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass ShortcutringIcon.ShortcutringIcon_C
	 * Size -> 0x0048 (FullSize[0x02D0] - InheritedSize[0x0288])
	 */
	class UShortcutringIcon_C : public USBShortcutRingIcon
	{
	public:
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhover;                                               // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickRight;                                            // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UDragDropOperation*                                  DragDropOperation;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Unhover();
		void Hover();
		void OnUnbindIcon(class USBShortcutRingIconBase* InIcon);
		void OnBindIcon(class USBShortcutRingIconBase* InIcon);
		class USBShortcutRingIconBase* OnCreateWarpIcon();
		class USBShortcutRingIconBase* OnCreateCommandIcon();
		class USBShortcutRingIconBase* OnCreateTextIcon();
		class USBShortcutRingIconBase* OnCreateBasicIcon();
		class USBShortcutRingIconBase* OnCreateNoneIcon();
		void GetDragDropOperation(class UDragDropOperation** OutDragDropOperation);
		void SetDragDropOperation(class UDragDropOperation* InDradDropOperation);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
		void OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
		void OnUnhover__DelegateSignature(class UShortcutringIcon_C* Icon);
		void OnHover__DelegateSignature(class UShortcutringIcon_C* Icon);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
