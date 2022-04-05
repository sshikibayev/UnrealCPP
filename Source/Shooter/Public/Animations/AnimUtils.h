#pragma once

class AnimUtils
{
public:
    template <typename T>
    static T* FindNotifyByClass(UAnimSequenceBase* Animation)
    {
        check(Animation)
        const auto NotifyEvents = Animation->Notifies;
        for (const auto NotifyEvent : NotifyEvents)
        {
            const auto AnimNotify = Cast<T>(NotifyEvent.Notify);
            if (AnimNotify)
            {
                return AnimNotify;
            }
        }
        return nullptr;
    }
};
