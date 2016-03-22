package com.yahoo.wildwest.jnih;

public class CGenerator extends AbstractCGenerator {

    public CGenerator(Class<?> classToDump) {
        super(classToDump);
    }

    @Override
    public String generate() {
        // for c:
        // first write out the struct definition.
        // then we write the decode function.

        // now we can write the encode function.
        createEncodeFunction();

        return sw.toString();
    }

}
