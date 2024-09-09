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
	 * WidgetBlueprintGeneratedClass ChatLogUnreadMessage.ChatLogUnreadMessage_C
	 * Size -> 0x0078 (FullSize[0x02F0] - InheritedSize[0x0278])
	 */
	class UChatLogUnreadMessage_C : public UUserWidget
	{
	public:
		class UImage*                                              MessageBG;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBChatUIMessage                                    MessageLog;                                              // 0x0280(0x0070) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ZeroPadding(int32_t InValue, class FText* RetValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
